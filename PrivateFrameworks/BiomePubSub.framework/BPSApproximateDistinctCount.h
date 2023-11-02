
@interface BPSApproximateDistinctCount : NSObject <NSSecureCoding> {
    double  _approximateDistinctCount;
    bool  _countMapFull;
    struct hll_state { unsigned char x1[32]; } * _hllState;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic) double approximateDistinctCount;
@property (nonatomic) bool countMapFull;

+ (bool)supportsSecureCoding;

- (void)addData:(id)arg1;
- (void)addValue:(unsigned int)arg1;
- (double)approximateDistinctCount;
- (bool)countMapFull;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithHllState:(struct hll_state { unsigned char x1[32]; }*)arg1;
- (void)printState;
- (void)setApproximateDistinctCount:(double)arg1;
- (void)setCountMapFull:(bool)arg1;

@end
