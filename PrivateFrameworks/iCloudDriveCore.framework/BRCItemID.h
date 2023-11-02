
@interface BRCItemID : NSObject <NSCopying, NSSecureCoding, PQLValuable> {
    BRCALRowID * _appLibraryRowID;
    unsigned char  _kind;
    unsigned char  _uuid;
    BRCZoneRowID * _zoneRowID;
}

@property (nonatomic, readonly) const char *UTF8String;
@property (nonatomic, readonly) BRCALRowID *appLibraryRowID;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) NSString *debugItemIDString;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isDocumentsFolder;
@property (nonatomic, readonly) bool isNonDesktopRoot;
@property (nonatomic, readonly) bool isSharedZoneRoot;
@property (nonatomic, readonly) NSString *itemIDString;
@property (nonatomic, readonly) BRCZoneRowID *sharedZoneRowID;
@property (readonly) Class superclass;

+ (id)defaultDesktopItemID;
+ (id)defaultDocumentsItemID;
+ (id)documentsItemIDWithAppLibraryRowID:(id)arg1;
+ (bool)isDocumentsItemIDWithSQLiteValue:(struct sqlite3_value { }*)arg1;
+ (bool)isRootItemIDWithSQLiteValue:(struct sqlite3_value { }*)arg1;
+ (bool)isSharedZoneRootItemIDWithSQLiteValue:(struct sqlite3_value { }*)arg1;
+ (bool)migrateItemIDsToVersion11WithDB:(id)arg1 serverTruth:(bool)arg2;
+ (bool)migrateItemIDsToVersion5WithDB:(id)arg1 serverTruth:(bool)arg2;
+ (bool)migrateItemIDsToVersion8WithDB:(id)arg1 serverTruth:(bool)arg2;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;
+ (id)parseMangledItemIDString:(id)arg1 mangledID:(id*)arg2 etag:(id*)arg3 session:(id)arg4;
+ (id)shareAliasRecordIDFromTargetItemID:(id)arg1 zone:(id)arg2 hasDerivedShareAlias:(bool)arg3;
+ (id)structureRecordPrefixForItemType:(BOOL)arg1 targetZoneShared:(bool)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (const char *)UTF8String;
- (id)_directoryRecordNameWithSession:(id)arg1;
- (id)_initAsLibraryRootWithAppLibraryRowID:(id)arg1;
- (id)_initAsZoneRootWithZoneRowID:(id)arg1;
- (id)appLibraryRowID;
- (id)contentsRecordIDInZoneID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (id)debugItemIDString;
- (id)derivedAliasItemIDWithOwnerName:(id)arg1;
- (id)description;
- (id)directoryReferenceInZone:(id)arg1 action:(unsigned long long)arg2;
- (id)directoryStructureRecordIDInZone:(id)arg1;
- (id)documentStructureRecordIDInZoneID:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initAsDocumentsWithAppLibraryRowID:(id)arg1;
- (id)initWithAliasUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithItemID:(id)arg1;
- (id)initWithRootObject:(struct RootItemObject { unsigned char x1; union { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; }*)arg1;
- (id)initWithString:(id)arg1 libraryRowID:(id)arg2 sharedZoneRowID:(id)arg3;
- (id)initWithUUID:(const char *)arg1;
- (id)initWithUUIDString:(id)arg1;
- (bool)isDocumentsFolder;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToItemID:(id)arg1;
- (bool)isNonDesktopRoot;
- (bool)isSharedZoneRoot;
- (id)itemIDString;
- (id)itemUUIDString;
- (id)pcsChainDocumentStructureReferenceInZoneID:(id)arg1;
- (id)pcsChainParentReferenceInZone:(id)arg1;
- (id)sharedZoneRowID;
- (id)sideCarRecordIDWithZone:(id)arg1;
- (id)sideCarRecordNameWithZone:(id)arg1;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;
- (id)structureRecordIDForItemType:(BOOL)arg1 zone:(id)arg2 aliasTargetZoneIsShared:(bool)arg3;
- (id)validatingDirectoryReferenceInZone:(id)arg1;
- (id)zoneUniqueItemIDStringWithSession:(id)arg1;

@end
