
@interface CKPackage : NSObject <CKRecordValue, NSSecureCoding> {
    NSString * _UUID;
    NSData * _archiverInfo;
    NSArray * _assets;
    bool  _downloaded;
    bool  _hasSize;
    unsigned long long  _nextItemIndex;
    bool  _open;
    long long  _packageID;
    CKPackageReference * _packageReference;
    CKRecord * _record;
    NSString * _recordKey;
    struct _OpaquePCSShareProtection { } * _recordPCS;
    NSString * _rootDatabasePath;
    bool  _shouldReadRawEncryptedData;
    unsigned long long  _size;
    CKSQLite * _sqlite;
    long long  _state;
    long long  _storageGroupingPolicy;
    long long  _uploadRank;
    bool  _uploaded;
    bool  _wasCached;
}

@property (nonatomic, copy) NSString *UUID;
@property (nonatomic, copy) NSData *archiverInfo;
@property (nonatomic, copy) NSArray *assets;
@property (nonatomic, copy) NSString *databaseBasePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool downloaded;
@property (nonatomic) bool hasSize;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long nextItemIndex;
@property (getter=isOpen, nonatomic) bool open;
@property (nonatomic) long long packageID;
@property (nonatomic, retain) CKPackageReference *packageReference;
@property (nonatomic) CKRecord *record;
@property (nonatomic, copy) NSString *recordKey;
@property (nonatomic) struct _OpaquePCSShareProtection { }*recordPCS;
@property (nonatomic, copy) NSString *rootDatabasePath;
@property (nonatomic) bool shouldReadRawEncryptedData;
@property (nonatomic, copy) NSData *signature;
@property (nonatomic) unsigned long long size;
@property (nonatomic, retain) CKSQLite *sqlite;
@property (nonatomic) long long state;
@property (nonatomic) long long storageGroupingPolicy;
@property (readonly) Class superclass;
@property (nonatomic) long long uploadRank;
@property (nonatomic) bool uploaded;
@property (nonatomic) bool wasCached;

// Image: /System/Library/Frameworks/CloudKit.framework/CloudKit

+ (id)clientPackageDatabaseDirectory;
+ (id)clonedPackageWithRecordID:(id)arg1 databaseScope:(long long)arg2 fieldName:(id)arg3 error:(id*)arg4;
+ (void)destroyClientPackageWithDatabaseBasePath:(id)arg1 UUID:(id)arg2;
+ (void)gcPackagesInDirectory:(id)arg1 dbInUseBlock:(id /* block */)arg2;
+ (id)packageInClientWithBasePath:(id)arg1 error:(id*)arg2;
+ (id)packageInDaemonWithBasePath:(id)arg1 error:(id*)arg2;
+ (id)packageProcessBasePath;
+ (id)packageWithError:(id*)arg1;
+ (id)packageWithPackage:(id)arg1 error:(id*)arg2;
+ (id)stagingPathSuffixForCloudKitCachesDirectoryWithBundleIdentifier:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)CKDescriptionPropertiesWithPublic:(bool)arg1 private:(bool)arg2 shouldExpand:(bool)arg3;
- (id)UUID;
- (id)_initWithBasePath:(id)arg1 UUID:(id)arg2;
- (id)_itemOrNilAtIndex:(unsigned long long)arg1;
- (id)_itemWithColumnsByName:(id)arg1;
- (id)_packageDatabasePath;
- (id)_packageDatabasePathWithState:(long long)arg1;
- (bool)addItem:(id)arg1;
- (bool)addSection:(id)arg1;
- (id)archiverInfo;
- (id)assets;
- (bool)claimOwnershipWithError:(id*)arg1;
- (id)clonedPackageInDaemonWithBasePath:(id)arg1 filesDuplicatedIntoDirectory:(id)arg2 error:(id*)arg3;
- (void)close;
- (id)databaseBasePath;
- (void)dealloc;
- (id)description;
- (bool)downloaded;
- (double)earliestUploadReceiptExpiration;
- (void)encodeWithCoder:(id)arg1;
- (void)handleChangeStateAction:(long long)arg1;
- (bool)handleChangeStateAction:(long long)arg1 error:(id*)arg2;
- (bool)hasSize;
- (id)init;
- (id)initUnreachablePackageWithUUID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isOpen;
- (bool)isReference;
- (id)itemAtIndex:(unsigned long long)arg1;
- (unsigned long long)itemCount;
- (unsigned long long)itemCountWithError:(id*)arg1;
- (id)itemEnumerator;
- (id)itemEnumeratorForSectionAtIndex:(unsigned long long)arg1;
- (bool)movePackagesDatabaseInDirection:(bool)arg1 error:(id*)arg2;
- (unsigned long long)nextItemIndex;
- (bool)openWithError:(id*)arg1;
- (long long)packageID;
- (id)packageReference;
- (id)performTransactionBlock:(id /* block */)arg1;
- (bool)prepareDBWithError:(id*)arg1;
- (id)record;
- (id)recordKey;
- (struct _OpaquePCSShareProtection { }*)recordPCS;
- (void)releaseDB;
- (void)releaseDBWithRemove:(bool)arg1;
- (void)removeDB;
- (bool)removeDBAndDeleteFilesWithError:(id*)arg1;
- (id)rootDatabasePath;
- (id)sectionAtIndex:(unsigned long long)arg1;
- (unsigned long long)sectionCount;
- (void)setArchiverInfo:(id)arg1;
- (bool)setArchiverInfo:(id)arg1 error:(id*)arg2;
- (void)setAssets:(id)arg1;
- (void)setDatabaseBasePath:(id)arg1;
- (void)setDownloaded:(bool)arg1;
- (void)setHasSize:(bool)arg1;
- (void)setNextItemIndex:(unsigned long long)arg1;
- (void)setOpen:(bool)arg1;
- (void)setPackageID:(long long)arg1;
- (void)setPackageReference:(id)arg1;
- (void)setRecord:(id)arg1;
- (void)setRecordKey:(id)arg1;
- (void)setRecordPCS:(struct _OpaquePCSShareProtection { }*)arg1;
- (void)setRootDatabasePath:(id)arg1;
- (void)setShouldReadRawEncryptedData:(bool)arg1;
- (void)setSignature:(id)arg1;
- (void)setSize:(unsigned long long)arg1;
- (void)setSqlite:(id)arg1;
- (void)setState:(long long)arg1;
- (void)setStorageGroupingPolicy:(long long)arg1;
- (void)setUUID:(id)arg1;
- (void)setUploadRank:(long long)arg1;
- (void)setUploaded:(bool)arg1;
- (void)setWasCached:(bool)arg1;
- (bool)shouldReadRawEncryptedData;
- (id)signature;
- (unsigned long long)size;
- (id)sqlite;
- (long long)state;
- (long long)storageGroupingPolicy;
- (id)testAddSectionConstraintViolation:(id)arg1;
- (bool)updateItemAtIndex:(long long)arg1 withFileURL:(id)arg2;
- (bool)updateItemAtIndex:(long long)arg1 withSignature:(id)arg2 size:(unsigned long long)arg3 itemID:(unsigned long long)arg4 sectionIndex:(unsigned long long)arg5;
- (bool)updateItemsAtIndexes:(id)arg1 fileURLs:(id)arg2;
- (long long)uploadRank;
- (bool)uploaded;
- (bool)wasCached;

// Image: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon

+ (bool)anchorExistsForArchiverInfo:(id)arg1;
+ (void)destroyAnchorAndPackageAnchoredAtURL:(id)arg1;

- (bool)anchorAtURL:(id)arg1 error:(id*)arg2;

// Image: /System/Library/PrivateFrameworks/iCloudDriveCore.framework/iCloudDriveCore

+ (bool)anchorExistsForArchiverInfo:(id)arg1;
+ (void)destroyAnchorAndPackageAnchoredAtURL:(id)arg1;

- (bool)anchorAtURL:(id)arg1 error:(id*)arg2;

@end
