
@interface SBSStatusBarBackgroundActivityTapContextImpl : NSObject <NSSecureCoding, SBSStatusBarBackgroundActivityTapContext, SBSStatusBarTapContext> {
    NSString * _backgroundActivityIdentifier;
    unsigned long long  _styleOverride;
}

@property (nonatomic, copy) NSString *backgroundActivityIdentifier;
@property (nonatomic) unsigned long long styleOverride;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)backgroundActivityIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBackgroundActivityIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setBackgroundActivityIdentifier:(id)arg1;
- (void)setStyleOverride:(unsigned long long)arg1;
- (unsigned long long)styleOverride;

@end
