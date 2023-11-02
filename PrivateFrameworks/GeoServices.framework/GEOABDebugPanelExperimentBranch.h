
@interface GEOABDebugPanelExperimentBranch : PBCodable <NSCopying> {
    NSString * _branchLabel;
    NSString * _branchName;
    NSString * _experimentId;
    NSString * _experimentName;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_branchLabel : 1; 
        unsigned int read_branchName : 1; 
        unsigned int read_experimentId : 1; 
        unsigned int read_experimentName : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *branchLabel;
@property (nonatomic, retain) NSString *branchName;
@property (nonatomic, retain) NSString *experimentId;
@property (nonatomic, retain) NSString *experimentName;
@property (nonatomic, readonly) bool hasBranchLabel;
@property (nonatomic, readonly) bool hasBranchName;
@property (nonatomic, readonly) bool hasExperimentId;
@property (nonatomic, readonly) bool hasExperimentName;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (id)branchLabel;
- (id)branchName;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)experimentId;
- (id)experimentName;
- (bool)hasBranchLabel;
- (bool)hasBranchName;
- (bool)hasExperimentId;
- (bool)hasExperimentName;
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
- (void)setBranchLabel:(id)arg1;
- (void)setBranchName:(id)arg1;
- (void)setExperimentId:(id)arg1;
- (void)setExperimentName:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
