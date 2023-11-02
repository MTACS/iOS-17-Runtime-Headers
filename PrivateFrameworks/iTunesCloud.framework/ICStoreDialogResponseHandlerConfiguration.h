
@interface ICStoreDialogResponseHandlerConfiguration : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowsHandlingNonAuthenticationDialogs;
    bool  _shouldRecordLastAuthenticationDialogResponseTime;
}

@property (nonatomic) bool allowsHandlingNonAuthenticationDialogs;
@property (nonatomic) bool shouldRecordLastAuthenticationDialogResponseTime;

+ (bool)supportsSecureCoding;

- (bool)allowsHandlingNonAuthenticationDialogs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setAllowsHandlingNonAuthenticationDialogs:(bool)arg1;
- (void)setShouldRecordLastAuthenticationDialogResponseTime:(bool)arg1;
- (bool)shouldRecordLastAuthenticationDialogResponseTime;

@end
