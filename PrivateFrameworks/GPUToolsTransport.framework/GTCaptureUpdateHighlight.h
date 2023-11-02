
@interface GTCaptureUpdateHighlight : GTCaptureRequest <NSSecureCoding> {
    bool  _enable;
    unsigned long long  _streamRef;
}

@property (nonatomic) bool enable;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (bool)enable;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setEnable:(bool)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;

@end
