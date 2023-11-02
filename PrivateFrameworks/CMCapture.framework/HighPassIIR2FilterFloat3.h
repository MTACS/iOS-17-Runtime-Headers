
@interface HighPassIIR2FilterFloat3 : NSObject {
    void _filteredValue;
    bool  _isFilterInitialized;
    void _lowPassBuffer1;
    void _lowPassBuffer2;
}

@property (nonatomic, readonly) void filteredValue;

- (void)filteredValue;
- (id)init;
- (void)reset;
- (void)updateValue:(void *)arg1 withPole:(void *)arg2; // needs 2 arg types, found 1: float

@end
