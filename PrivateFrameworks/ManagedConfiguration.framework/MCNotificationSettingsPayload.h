
@interface MCNotificationSettingsPayload : MCPayload {
    NSArray * _notificationSettings;
}

@property (nonatomic, retain) NSArray *notificationSettings;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)typeStrings;

- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id*)arg3;
- (id)notificationSettings;
- (id)payloadDescriptionKeyValueSections;
- (void)setNotificationSettings:(id)arg1;
- (id)stubDictionary;
- (id)validatedNotificationSettings:(id)arg1 outError:(id*)arg2;

@end
