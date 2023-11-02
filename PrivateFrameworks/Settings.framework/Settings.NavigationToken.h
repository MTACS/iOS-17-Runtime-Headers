
@interface Settings.NavigationToken : NSObject <NSSecureCoding> {
    void hasPushedContent;
    void iconData;
    void iconUTType;
    void isRoot;
    void navigationPath;
    void subtitle;
    void title;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end
