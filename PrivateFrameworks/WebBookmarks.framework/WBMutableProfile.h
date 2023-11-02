
@interface WBMutableProfile : WBProfile

@property (nonatomic, copy) WBSNamedColorOption *color;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *settingsDictionary;
@property (nonatomic, copy) NSData *startPageSectionsDataRepresentation;
@property (nonatomic, copy) NSString *symbolImageName;
@property (nonatomic, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic) bool syncable;
@property (nonatomic, copy) NSArray *tabGroups;
@property (nonatomic, copy) NSString *title;

+ (id)createDefaultProfileWithTabGroups:(id)arg1;

- (id)initWithBookmark:(id)arg1 kind:(long long)arg2 tabGroups:(id)arg3;
- (id)initWithBookmark:(id)arg1 tabGroups:(id)arg2;
- (void)markBackgroundImageAsModified;
- (void)mergeWithProfile:(id)arg1;
- (void)resumeIncrementingFields:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setDatabaseIdentifier:(int)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setSetting:(id)arg1 forKey:(id)arg2;
- (void)setSettingsDictionary:(id)arg1;
- (void)setStartPageSectionsDataRepresentation:(id)arg1;
- (void)setSymbolImageName:(id)arg1;
- (void)setSyncPosition:(id)arg1;
- (void)setSyncable:(bool)arg1;
- (void)setTabGroups:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)settingsDictionary;
- (id)syncPosition;

@end
