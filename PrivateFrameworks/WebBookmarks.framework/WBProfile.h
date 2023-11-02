
@interface WBProfile : NSObject <NSCopying, NSMutableCopying, WBBookmarkRepresentable, WBSProfileMetadataProviding> {
    WebBookmark * _bookmark;
    long long  _kind;
    NSMutableDictionary * _settingsDictionary;
    NSArray * _tabGroups;
    id /* block */  _titleProvider;
}

@property (nonatomic, retain) WebBookmark *bookmark;
@property (nonatomic, readonly, copy) WBSNamedColorOption *color;
@property (nonatomic, copy) NSString *customFavoritesFolderServerID;
@property (nonatomic, readonly) int databaseIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *identifierForExtensions;
@property (getter=isInserted, nonatomic, readonly) bool inserted;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly, copy) NSDictionary *modifiedSettingsFieldsByName;
@property (nonatomic, readonly) bool needsSecureDelete;
@property (nonatomic, readonly, copy) NSString *privacyPreservingDescription;
@property (nonatomic, readonly, copy) NSString *serverID;
@property (nonatomic, readonly, copy) NSData *startPageSectionsDataRepresentation;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *symbolImageName;
@property (nonatomic, readonly, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic, readonly) bool syncable;
@property (nonatomic, readonly, copy) NSArray *tabGroups;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)availableSymbolImageNames;

- (void).cxx_destruct;
- (Class)_copyClassIsMutable:(bool)arg1;
- (id)_copyWithZone:(struct _NSZone { }*)arg1 isMutable:(bool)arg2;
- (id)_defaultSettingForKey:(id)arg1;
- (id)bookmark;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)customFavoritesFolderServerID;
- (int)databaseIdentifier;
- (id)description;
- (id)deviceIdentifier;
- (id)differenceFromProfile:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)identifierForExtensions;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 kind:(long long)arg2;
- (id)initWithTitle:(id)arg1 deviceIdentifier:(id)arg2;
- (id)initWithTitle:(id)arg1 symbolImageName:(id)arg2 favoritesFolderServerID:(id)arg3 deviceIdentifier:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isInserted;
- (bool)isSyncable;
- (long long)kind;
- (id)modifiedSettingsFieldsByName;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (bool)needsSecureDelete;
- (id)privacyPreservingDescription;
- (id)serverID;
- (void)setBookmark:(id)arg1;
- (void)setCustomFavoritesFolderServerID:(id)arg1;
- (id)settingForKey:(id)arg1;
- (id)startPageSectionsDataRepresentation;
- (id)symbolImageName;
- (id)syncPosition;
- (id)tabGroups;
- (id)title;

@end
