
@interface CoreIDVShared.IdentityProofingUIConfig : NSObject <NSSecureCoding> {
    void caption;
    void displayName;
    void fields;
    void imageAssetsData;
    void isUIEnabled;
    void maxLength;
    void messages;
    void minLength;
    void options;
    void placeholder;
    void primaryButtonTitle;
    void secondaryButtonTitle;
    void subTitle;
    void tertiaryButtonTitle;
    void title;
    void url;
    void view;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
