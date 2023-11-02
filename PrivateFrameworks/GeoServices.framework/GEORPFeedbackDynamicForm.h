
@interface GEORPFeedbackDynamicForm : PBCodable <NSCopying> {
    NSString * _abBranchId;
    NSString * _abManifestVersion;
    struct { 
        unsigned int read_abBranchId : 1; 
        unsigned int read_abManifestVersion : 1; 
        unsigned int read_formFields : 1; 
        unsigned int read_userPaths : 1; 
        unsigned int read_version : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSMutableArray * _formFields;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    NSMutableArray * _userPaths;
    NSString * _version;
}

@property (nonatomic, retain) NSString *abBranchId;
@property (nonatomic, retain) NSString *abManifestVersion;
@property (nonatomic, retain) NSMutableArray *formFields;
@property (nonatomic, readonly) bool hasAbBranchId;
@property (nonatomic, readonly) bool hasAbManifestVersion;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *userPaths;
@property (nonatomic, retain) NSString *version;

+ (Class)formFieldsType;
+ (bool)isValid:(id)arg1;
+ (Class)userPathsType;

- (void).cxx_destruct;
- (id)abBranchId;
- (id)abManifestVersion;
- (void)addFormFields:(id)arg1;
- (void)addUserPaths:(id)arg1;
- (void)clearFormFields;
- (void)clearUserPaths;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)formFields;
- (id)formFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)formFieldsCount;
- (bool)hasAbBranchId;
- (bool)hasAbManifestVersion;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbBranchId:(id)arg1;
- (void)setAbManifestVersion:(id)arg1;
- (void)setFormFields:(id)arg1;
- (void)setUserPaths:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)userPaths;
- (id)userPathsAtIndex:(unsigned long long)arg1;
- (unsigned long long)userPathsCount;
- (id)version;
- (void)writeTo:(id)arg1;

@end
