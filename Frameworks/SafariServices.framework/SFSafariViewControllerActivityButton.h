
@interface SFSafariViewControllerActivityButton : NSObject <NSCopying, NSSecureCoding> {
    NSString * _extensionIdentifier;
    UIImage * _templateImage;
}

@property (nonatomic, readonly) bool _fieldsAreValid;
@property (nonatomic, readonly, copy) NSString *extensionIdentifier;
@property (nonatomic, readonly, copy) UIImage *templateImage;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_fieldsAreValid;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionIdentifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithTemplateImage:(id)arg1 extensionIdentifier:(id)arg2;
- (id)templateImage;

@end
