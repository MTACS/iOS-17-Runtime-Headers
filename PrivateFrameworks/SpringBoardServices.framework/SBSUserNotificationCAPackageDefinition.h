
@interface SBSUserNotificationCAPackageDefinition : SBSUserNotificationAssetDefinition {
    NSString * _caPackagePath;
}

@property (nonatomic, readonly, copy) NSString *caPackagePath;

+ (id)_definitionType;
+ (id)definitionWithCAPackagePath:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithCAPackagePath:(id)arg1;
- (id)_initWithDictionary:(id)arg1;
- (id)build;
- (id)caPackagePath;

@end
