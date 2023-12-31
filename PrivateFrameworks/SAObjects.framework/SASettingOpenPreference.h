
@interface SASettingOpenPreference : SASettingOpenSettings

@property (nonatomic, copy) NSString *pane;
@property (nonatomic, copy) NSString *tag;

+ (id)openPreference;
+ (id)openPreferenceWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)pane;
- (bool)requiresResponse;
- (void)setPane:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end
