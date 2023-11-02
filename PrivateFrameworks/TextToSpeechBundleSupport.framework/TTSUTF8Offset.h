
@interface TTSUTF8Offset : NSObject {
    long long  _actualLength;
    long long  _actualPos;
    long long  _cStringOffset;
    long long  _lengthDifference;
}

@property (nonatomic) long long actualLength;
@property (nonatomic) long long actualPos;
@property (nonatomic) long long cStringOffset;
@property (nonatomic) long long lengthDifference;

- (long long)actualLength;
- (long long)actualPos;
- (long long)cStringOffset;
- (id)description;
- (long long)lengthDifference;
- (void)setActualLength:(long long)arg1;
- (void)setActualPos:(long long)arg1;
- (void)setCStringOffset:(long long)arg1;
- (void)setLengthDifference:(long long)arg1;

@end
