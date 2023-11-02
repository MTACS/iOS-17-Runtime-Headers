
@interface FPNSURLBitVectorForBounce : NSObject {
    int  _bitCount;
    struct __CFBitVector { } * _vector;
}

@property (nonatomic, readonly) int bitCount;

- (int)bitCount;
- (id)findNextAvailableBounceNumber;
- (id)findNextAvailableBounceNumberFromIndex:(int)arg1;
- (bool)foundAllAvailableBounceNumbers;
- (id)init;
- (void)markBounceNumberAsFound:(id)arg1;

@end
