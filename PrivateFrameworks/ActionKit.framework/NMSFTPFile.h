
@interface NMSFTPFile : NSObject <NSCopying> {
    NSNumber * _fileSize;
    NSString * _filename;
    unsigned long long  _flags;
    bool  _isDirectory;
    NSDate * _lastAccess;
    NSDate * _modificationDate;
    unsigned long long  _ownerGroupID;
    unsigned long long  _ownerUserID;
    NSString * _permissions;
}

@property (nonatomic, retain) NSNumber *fileSize;
@property (nonatomic, retain) NSString *filename;
@property (nonatomic) unsigned long long flags;
@property (nonatomic) bool isDirectory;
@property (nonatomic, retain) NSDate *lastAccess;
@property (nonatomic, retain) NSDate *modificationDate;
@property (nonatomic) unsigned long long ownerGroupID;
@property (nonatomic) unsigned long long ownerUserID;
@property (nonatomic, retain) NSString *permissions;

+ (id)fileWithName:(id)arg1;

- (void).cxx_destruct;
- (long long)compare:(id)arg1;
- (id)convertPermissionToSymbolicNotation:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fileSize;
- (id)filename;
- (BOOL)filetypeletter:(unsigned long long)arg1;
- (unsigned long long)flags;
- (id)initWithFilename:(id)arg1;
- (bool)isDirectory;
- (bool)isEqual:(id)arg1;
- (id)lastAccess;
- (id)modificationDate;
- (unsigned long long)ownerGroupID;
- (unsigned long long)ownerUserID;
- (id)permissions;
- (void)populateValuesFromSFTPAttributes:(struct _LIBSSH2_SFTP_ATTRIBUTES { unsigned long long x1; unsigned long long x2; unsigned long long x3; unsigned long long x4; unsigned long long x5; unsigned long long x6; unsigned long long x7; })arg1;
- (void)setFileSize:(id)arg1;
- (void)setFilename:(id)arg1;
- (void)setFlags:(unsigned long long)arg1;
- (void)setIsDirectory:(bool)arg1;
- (void)setLastAccess:(id)arg1;
- (void)setModificationDate:(id)arg1;
- (void)setOwnerGroupID:(unsigned long long)arg1;
- (void)setOwnerUserID:(unsigned long long)arg1;
- (void)setPermissions:(id)arg1;

@end
