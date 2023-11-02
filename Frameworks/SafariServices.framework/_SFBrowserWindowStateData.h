
@interface _SFBrowserWindowStateData : NSObject {
    NSString * _UUIDString;
    long long  _activeDocumentIndex;
    long long  _activePrivateDocumentIndex;
    NSString * _activeProfileIdentifier;
    long long  _databaseID;
    bool  _isActiveDocumentValid;
    bool  _isTabStateSuccessfullyLoaded;
    long long  _legacyPlistFileVersion;
    bool  _needsQuickUpdate;
    NSString * _sceneID;
    long long  _type;
}

@property (nonatomic, retain) NSUUID *UUID;
@property (nonatomic, retain) NSString *UUIDString;
@property (nonatomic) long long activeDocumentIndex;
@property (nonatomic) long long activePrivateDocumentIndex;
@property (nonatomic, copy) NSString *activeProfileIdentifier;
@property (nonatomic) long long databaseID;
@property (nonatomic) bool isActiveDocumentValid;
@property (nonatomic, readonly) bool isInDatabase;
@property (nonatomic) bool isTabStateSuccessfullyLoaded;
@property (nonatomic) long long legacyPlistFileVersion;
@property (nonatomic) bool needsQuickUpdate;
@property (nonatomic, retain) NSString *sceneID;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)UUID;
- (id)UUIDString;
- (long long)activeDocumentIndex;
- (long long)activePrivateDocumentIndex;
- (id)activeProfileIdentifier;
- (long long)databaseID;
- (id)debugDescription;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithSQLiteRow:(id)arg1;
- (id)initWithUUIDString:(id)arg1 sceneID:(id)arg2;
- (bool)isActiveDocumentValid;
- (bool)isEqual:(id)arg1;
- (bool)isInDatabase;
- (bool)isTabStateSuccessfullyLoaded;
- (long long)legacyPlistFileVersion;
- (bool)needsQuickUpdate;
- (id)sceneID;
- (void)setActiveDocumentIndex:(long long)arg1;
- (void)setActivePrivateDocumentIndex:(long long)arg1;
- (void)setActiveProfileIdentifier:(id)arg1;
- (void)setDatabaseID:(long long)arg1;
- (void)setIsActiveDocumentValid:(bool)arg1;
- (void)setIsTabStateSuccessfullyLoaded:(bool)arg1;
- (void)setLegacyPlistFileVersion:(long long)arg1;
- (void)setNeedsQuickUpdate:(bool)arg1;
- (void)setSceneID:(id)arg1;
- (void)setType:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (long long)type;

@end
