
@interface SAGlance : SADomainObject

@property (nonatomic, copy) NSString *appId;
@property (nonatomic, copy) NSString *glanceDisplayName;
@property (nonatomic, copy) NSString *glanceId;
@property (nonatomic, copy) NSDictionary *localizedGlanceDisplayNameMap;

+ (id)glance;
+ (id)glanceWithDictionary:(id)arg1 context:(id)arg2;

- (id)appId;
- (id)encodedClassName;
- (id)glanceDisplayName;
- (id)glanceId;
- (id)groupIdentifier;
- (id)localizedGlanceDisplayNameMap;
- (void)setAppId:(id)arg1;
- (void)setGlanceDisplayName:(id)arg1;
- (void)setGlanceId:(id)arg1;
- (void)setLocalizedGlanceDisplayNameMap:(id)arg1;

@end
