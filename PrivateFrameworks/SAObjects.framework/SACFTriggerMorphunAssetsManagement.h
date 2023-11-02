
@interface SACFTriggerMorphunAssetsManagement : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *language;

+ (id)triggerMorphunAssetsManagement;
+ (id)triggerMorphunAssetsManagementWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)language;
- (bool)requiresResponse;
- (void)setLanguage:(id)arg1;

@end
