
@interface SASTApplicationBannerItem : AceObject <SASTActionableTemplateItem>

@property (nonatomic, retain) <SASTTemplateAction> *action;
@property (nonatomic, copy) NSString *bundleId;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)applicationBannerItem;
+ (id)applicationBannerItemWithDictionary:(id)arg1 context:(id)arg2;

- (id)action;
- (id)bundleId;
- (id)encodedClassName;
- (id)groupIdentifier;
- (void)setAction:(id)arg1;
- (void)setBundleId:(id)arg1;

@end
