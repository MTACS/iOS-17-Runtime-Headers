
@interface NSFileProviderEnumerationProperties : FPEnumerationSettings {
    NSString * _enumeratedItemIdentifier;
    NSString * _enumeratingApplicationBundleIdentifier;
    NSArray * _fileTypes;
    NSDictionary * _userInfo;
}

@property (copy) NSString *enumeratedItemIdentifier;
@property (copy) NSString *enumeratingApplicationBundleIdentifier;
@property (copy) NSArray *fileTypes;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id)enumeratedItemIdentifier;
- (id)enumeratingApplicationBundleIdentifier;
- (id)fileTypes;
- (void)setEnumeratedItemIdentifier:(id)arg1;
- (void)setEnumeratingApplicationBundleIdentifier:(id)arg1;
- (void)setFileTypes:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
