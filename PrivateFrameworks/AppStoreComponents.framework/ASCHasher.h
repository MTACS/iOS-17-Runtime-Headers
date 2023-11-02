
@interface ASCHasher : NSObject {
    NSMutableData * _buffer;
    bool  _isFinalized;
}

@property (nonatomic, readonly) NSMutableData *buffer;
@property (nonatomic) bool isFinalized;

+ (unsigned long long)executionSeed;

- (void).cxx_destruct;
- (id)buffer;
- (void)combineBool:(bool)arg1;
- (void)combineBytes:(const void*)arg1 length:(unsigned long long)arg2;
- (void)combineDouble:(double)arg1;
- (void)combineInteger:(long long)arg1;
- (void)combineObject:(id)arg1;
- (void)combineUnsignedInteger:(unsigned long long)arg1;
- (unsigned long long)finalizeHash;
- (id)init;
- (bool)isFinalized;
- (void)setIsFinalized:(bool)arg1;

@end
