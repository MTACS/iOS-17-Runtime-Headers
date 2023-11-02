
@interface GEORPProblemStatus : PBCodable <NSCopying> {
    double  _creationDate;
    GEORPDetails * _details;
    struct { 
        unsigned int has_creationDate : 1; 
        unsigned int has_problemState : 1; 
        unsigned int read_details : 1; 
        unsigned int read_notification : 1; 
        unsigned int read_problemId : 1; 
        unsigned int read_problemResolution : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    GEORPNotification * _notification;
    NSString * _problemId;
    GEORPResolution * _problemResolution;
    int  _problemState;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
}

@property (nonatomic) double creationDate;
@property (nonatomic, retain) GEORPDetails *details;
@property (nonatomic) bool hasCreationDate;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasNotification;
@property (nonatomic, readonly) bool hasProblemId;
@property (nonatomic, readonly) bool hasProblemResolution;
@property (nonatomic) bool hasProblemState;
@property (nonatomic, retain) GEORPNotification *notification;
@property (nonatomic, retain) NSString *problemId;
@property (nonatomic, retain) GEORPResolution *problemResolution;
@property (nonatomic) int problemState;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsProblemState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)creationDate;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (bool)hasCreationDate;
- (bool)hasDetails;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasNotification;
- (bool)hasProblemId;
- (bool)hasProblemResolution;
- (bool)hasProblemState;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)notification;
- (id)problemId;
- (id)problemResolution;
- (int)problemState;
- (id)problemStateAsString:(int)arg1;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCreationDate:(double)arg1;
- (void)setDetails:(id)arg1;
- (void)setHasCreationDate:(bool)arg1;
- (void)setHasProblemState:(bool)arg1;
- (void)setNotification:(id)arg1;
- (void)setProblemId:(id)arg1;
- (void)setProblemResolution:(id)arg1;
- (void)setProblemState:(int)arg1;
- (void)writeTo:(id)arg1;

@end
