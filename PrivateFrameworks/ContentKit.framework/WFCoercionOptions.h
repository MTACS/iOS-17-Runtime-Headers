
@interface WFCoercionOptions : NSObject <NSCopying> {
    NSDictionary * _dictionary;
}

@property (nonatomic, readonly) NSDictionary *dictionary;
@property (nonatomic, readonly) <WFContentPermissionRequestor> *permissionRequestor;
@property (nonatomic, readonly) bool shouldContinueLoadingWebContentIfExternalResourcesAreDenied;

+ (id)new;
+ (id)optionsWithDictionary:(id)arg1;
+ (void)registerDefaultDisallowedCoercionPath:(id)arg1;

- (void).cxx_destruct;
- (bool)coercionPathIsDisallowed:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionary;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)itemClassPrioritizationType;
- (id)optionsByAddingContentsOfOptions:(id)arg1;
- (id)permissionRequestor;
- (id)preferredTypes;
- (bool)shouldContinueLoadingWebContentIfExternalResourcesAreDenied;

@end
