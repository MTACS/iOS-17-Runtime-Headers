
@interface BWStillImageCaptureBracketFrameInfo : BWStillImageCaptureFrameInfo <NSSecureCoding> {
    int  _bracketedCaptureSequenceNumber;
}

@property (nonatomic, readonly) int bracketedCaptureSequenceNumber;

+ (id)infoWithBracketedCaptureSequenceNumber:(int)arg1 mainFlags:(unsigned long long)arg2 sifrFlags:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (int)bracketedCaptureSequenceNumber;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBracketedCaptureSequenceNumber:(int)arg1 mainFlags:(unsigned long long)arg2 sifrFlags:(unsigned long long)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
