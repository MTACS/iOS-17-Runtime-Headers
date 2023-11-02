
@interface GEORPFeedbackInfo : PBCodable <NSCopying> {
    NSMutableArray * _feedbackComponents;
    NSString * _feedbackId;
    struct { 
        unsigned int has_status : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackComponents : 1; 
        unsigned int read_feedbackId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _status;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSMutableArray *feedbackComponents;
@property (nonatomic, retain) NSString *feedbackId;
@property (nonatomic, readonly) bool hasFeedbackId;
@property (nonatomic) bool hasStatus;
@property (nonatomic) int status;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)feedbackComponentType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsStatus:(id)arg1;
- (void)addFeedbackComponent:(id)arg1;
- (void)clearFeedbackComponents;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)feedbackComponentAtIndex:(unsigned long long)arg1;
- (id)feedbackComponents;
- (unsigned long long)feedbackComponentsCount;
- (id)feedbackId;
- (bool)hasFeedbackId;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasStatus;
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
- (void)setFeedbackComponents:(id)arg1;
- (void)setFeedbackId:(id)arg1;
- (void)setHasStatus:(bool)arg1;
- (void)setStatus:(int)arg1;
- (int)status;
- (id)statusAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
