
@interface RTDiagnosticOptions : NSObject <NSSecureCoding> {
    unsigned long long  _optionsMask;
}

@property (nonatomic) unsigned long long optionsMask;

+ (bool)supportsSecureCoding;

- (void)clearMask;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMask:(unsigned long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptionsMask:(unsigned long long)arg1;
- (unsigned long long)optionsMask;
- (void)setMask:(unsigned long long)arg1;
- (void)setOptionsMask:(unsigned long long)arg1;

@end
