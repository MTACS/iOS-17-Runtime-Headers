
@interface MEComposeExtensionValidationError : NSObject {
    NSError * _error;
    NSString * _extensionDisplayName;
    UIImage * _icon;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *extensionDisplayName;
@property (nonatomic, retain) UIImage *icon;

- (void).cxx_destruct;
- (id)error;
- (id)extensionDisplayName;
- (id)icon;
- (id)initWithExtensionName:(id)arg1 icon:(id)arg2 error:(id)arg3;
- (void)setError:(id)arg1;
- (void)setExtensionDisplayName:(id)arg1;
- (void)setIcon:(id)arg1;

@end
