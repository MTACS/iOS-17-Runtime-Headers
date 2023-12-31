
@interface SASettingGetValueResponse : SASettingResponse <SASettingSupplier>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) SASettingEntity *setting;
@property (readonly) Class superclass;

+ (id)getValueResponse;
+ (id)getValueResponseWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setSetting:(id)arg1;
- (id)setting;

@end
