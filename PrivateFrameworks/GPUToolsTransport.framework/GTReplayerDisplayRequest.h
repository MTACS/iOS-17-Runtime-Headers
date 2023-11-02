
@interface GTReplayerDisplayRequest : GTReplayRequest <NSSecureCoding> {
    union { 
        struct { 
            int dispatchIndex; 
            int dispatchICBIndex; 
        } ; 
        unsigned long long uid; 
    }  _dispatchUID;
    int  _filters;
    unsigned int  _index;
    unsigned long long  _streamRef;
}

@property (nonatomic) union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; } dispatchUID;
@property (nonatomic) int filters;
@property (nonatomic) unsigned int index;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })dispatchUID;
- (void)encodeWithCoder:(id)arg1;
- (int)filters;
- (unsigned int)index;
- (id)initWithCoder:(id)arg1;
- (void)setDispatchUID:(union { struct { int x_1_1_1; int x_1_1_2; } x1; unsigned long long x2; })arg1;
- (void)setFilters:(int)arg1;
- (void)setIndex:(unsigned int)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;

@end
