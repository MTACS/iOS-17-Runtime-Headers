
@interface GEOLogMsgStateRAP : PBCodable <NSCopying> {
    double  _duration;
    int  _entryPoint;
    NSMutableArray * _feedbackFieldOptionKeys;
    int  _feedbackType;
    struct { 
        unsigned int has_duration : 1; 
        unsigned int has_entryPoint : 1; 
        unsigned int has_feedbackType : 1; 
        unsigned int read_feedbackFieldOptionKeys : 1; 
        unsigned int read_rapAbBranchId : 1; 
        unsigned int read_rapAbManifestVersion : 1; 
        unsigned int read_rapServerManifestVersion : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _rapAbBranchId;
    NSString * _rapAbManifestVersion;
    NSString * _rapServerManifestVersion;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) double duration;
@property (nonatomic) int entryPoint;
@property (nonatomic, retain) NSMutableArray *feedbackFieldOptionKeys;
@property (nonatomic) int feedbackType;
@property (nonatomic) bool hasDuration;
@property (nonatomic) bool hasEntryPoint;
@property (nonatomic) bool hasFeedbackType;
@property (nonatomic, readonly) bool hasRapAbBranchId;
@property (nonatomic, readonly) bool hasRapAbManifestVersion;
@property (nonatomic, readonly) bool hasRapServerManifestVersion;
@property (nonatomic, retain) NSString *rapAbBranchId;
@property (nonatomic, retain) NSString *rapAbManifestVersion;
@property (nonatomic, retain) NSString *rapServerManifestVersion;

+ (Class)feedbackFieldOptionKeyType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsEntryPoint:(id)arg1;
- (int)StringAsFeedbackType:(id)arg1;
- (void)addFeedbackFieldOptionKey:(id)arg1;
- (void)clearFeedbackFieldOptionKeys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (double)duration;
- (int)entryPoint;
- (id)entryPointAsString:(int)arg1;
- (id)feedbackFieldOptionKeyAtIndex:(unsigned long long)arg1;
- (id)feedbackFieldOptionKeys;
- (unsigned long long)feedbackFieldOptionKeysCount;
- (int)feedbackType;
- (id)feedbackTypeAsString:(int)arg1;
- (bool)hasDuration;
- (bool)hasEntryPoint;
- (bool)hasFeedbackType;
- (bool)hasRapAbBranchId;
- (bool)hasRapAbManifestVersion;
- (bool)hasRapServerManifestVersion;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)rapAbBranchId;
- (id)rapAbManifestVersion;
- (id)rapServerManifestVersion;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDuration:(double)arg1;
- (void)setEntryPoint:(int)arg1;
- (void)setFeedbackFieldOptionKeys:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setHasDuration:(bool)arg1;
- (void)setHasEntryPoint:(bool)arg1;
- (void)setHasFeedbackType:(bool)arg1;
- (void)setRapAbBranchId:(id)arg1;
- (void)setRapAbManifestVersion:(id)arg1;
- (void)setRapServerManifestVersion:(id)arg1;
- (void)writeTo:(id)arg1;

@end
