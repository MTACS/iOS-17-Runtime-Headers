
@interface CKRecordID : NSObject <CKPropertiesDescription, CKRoughlyEquivalent, CKSQLiteItem, CKXPCSuitableString, ICHasDatabaseScope, NSCopying, NSSecureCoding, PQLValuable> {
    NSString * _recordName;
    CKRecordZoneID * _zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) CKRoughlyEquivalentProperties *equivalencyProperties;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *hmbDescription;
@property (readonly, copy) NSString *hmd_canonicalStringRepresentation;
@property (nonatomic, readonly) bool ic_isOwnedByCurrentUser;
@property (nonatomic, readonly, copy) NSString *ic_loggingDescription;
@property (nonatomic, readonly, copy) NSString *recordName;
@property (nonatomic, readonly) bool safari_isInPrivateDatabase;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CKRecordZoneID *zoneID;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (void)initialize;
+ (bool)isValidRecordName:(id)arg1 outError:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)CKDescribePropertiesUsing:(id)arg1;
- (id)CKPropertiesDescription;
- (id)CKShortDescriptionRedact:(bool)arg1;
- (id)CKXPCSuitableString;
- (void)_nilOutRecordName;
- (id)ckShortDescription;
- (void)ck_bindInStatement:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)compareToRecordID:(id)arg1;
- (id)copyWithAnonymousCKUserID:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)equivalencyProperties;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecordName:(id)arg1;
- (id)initWithRecordName:(id)arg1 zoneID:(id)arg2;
- (id)initWithSqliteRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualIgnoringAnonymousUserIDsToRecordID:(id)arg1;
- (id)recordName;
- (id)redactedDescription;
- (unsigned long long)size;
- (id)sqliteRepresentation;
- (id)zoneID;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_appLibraryDocumentsZoneName;
- (id)brc_appLibraryRootZoneName;
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;
- (bool)brc_isAppLibraryDocumentsRecordID;
- (bool)brc_isAppLibraryRootRecordID;
- (bool)brc_isZoneRootRecordID;
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_itemIDWithSession:(id)arg1;
- (id)brc_itemIDWithSession:(id)arg1 error:(id*)arg2;
- (BOOL)brc_itemType;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithShareableItem:(id)arg1;
- (bool)locateSideCarServerZone:(id*)arg1 withSession:(id)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

// Image: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore

+ (id)recordIDFromExternalID:(id)arg1 error:(id*)arg2;

- (id)externalID:(id*)arg1;
- (id)hmbDescription;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon

+ (id)parseFromString:(id)arg1;

- (id)encodeForKey;
- (id)hmd_canonicalStringRepresentation;
- (id)hmd_initWithCanonicalStringRepresentation:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HomeKitDaemonLegacy.framework/HomeKitDaemonLegacy

+ (id)parseFromString:(id)arg1;

- (id)encodeForKey;

// Image: /System/Library/PrivateFrameworks/MetricsKit.framework/MetricsKit

+ (id)mt_syncedFileExtension;
+ (id)mt_syncingFileExtension;

- (id)mt_syncedFileName;
- (id)mt_syncingFileName;

// Image: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared

- (long long)databaseScope;
- (bool)ic_hasEqualRecordNameWithRecordID:(id)arg1;
- (bool)ic_isOwnedByCurrentUser;
- (id)ic_loggingDescription;
- (id)ic_loggingDescriptionIncludingBrackets:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore

- (bool)safari_isInPrivateDatabase;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (id)brc_fetchShareIDWithSharedItem:(id)arg1;
+ (id)newFromSqliteStatement:(struct sqlite3_stmt { }*)arg1 atIndex:(int)arg2;
+ (id)newFromSqliteValue:(struct sqlite3_value { }*)arg1;

- (id)_itemIDWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_appLibraryDocumentsZoneName;
- (id)brc_appLibraryRootZoneName;
- (id)brc_collaborationIdentifierWithCachedCurrentUserRecordName:(id)arg1;
- (bool)brc_isAppLibraryDocumentsRecordID;
- (bool)brc_isAppLibraryRootRecordID;
- (bool)brc_isZoneRootRecordID;
- (id)brc_itemIDOfTargetWithLibraryRowID:(id)arg1 session:(id)arg2;
- (id)brc_itemIDWithSession:(id)arg1;
- (id)brc_itemIDWithSession:(id)arg1 error:(id*)arg2;
- (BOOL)brc_itemType;
- (id)brc_shareItemID;
- (id)brc_shareZoneName;
- (id)initShareIDWithItemID:(id)arg1 zoneID:(id)arg2;
- (id)initShareIDWithRecordID:(id)arg1 serverZone:(id)arg2;
- (id)initShareIDWithRecordID:(id)arg1 zoneID:(id)arg2 session:(id)arg3;
- (id)initShareIDWithShareableItem:(id)arg1;
- (bool)locateSideCarServerZone:(id*)arg1 withSession:(id)arg2;
- (void)sqliteBind:(struct sqlite3_stmt { }*)arg1 index:(int)arg2;

@end
