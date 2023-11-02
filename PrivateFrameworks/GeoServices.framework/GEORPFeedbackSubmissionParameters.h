
@interface GEORPFeedbackSubmissionParameters : PBCodable <NSCopying> {
    NSString * _clientSubmissionUuid;
    GEORPFeedbackCommonContext * _commonContext;
    GEORPFeedbackCommonCorrections * _commonCorrections;
    GEORPFeedbackDetails * _details;
    GEORPFeedbackDynamicForm * _dynamicForm;
    struct { 
        unsigned int has_type : 1; 
        unsigned int read_unknownFields : 1; 
        unsigned int read_clientSubmissionUuid : 1; 
        unsigned int read_commonContext : 1; 
        unsigned int read_commonCorrections : 1; 
        unsigned int read_details : 1; 
        unsigned int read_dynamicForm : 1; 
        unsigned int read_parentFeedbackId : 1; 
        unsigned int wrote_anyField : 1; 
    }  _flags;
    NSString * _parentFeedbackId;
    PBDataReader * _reader;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _readerLock;
    unsigned int  _readerMarkLength;
    unsigned int  _readerMarkPos;
    int  _type;
    PBUnknownFields * _unknownFields;
}

@property (nonatomic, retain) NSString *clientSubmissionUuid;
@property (nonatomic, retain) GEORPFeedbackCommonContext *commonContext;
@property (nonatomic, retain) GEORPFeedbackCommonCorrections *commonCorrections;
@property (nonatomic, retain) GEORPFeedbackDetails *details;
@property (nonatomic, retain) GEORPFeedbackDynamicForm *dynamicForm;
@property (nonatomic, readonly) bool hasClientSubmissionUuid;
@property (nonatomic, readonly) bool hasCommonContext;
@property (nonatomic, readonly) bool hasCommonCorrections;
@property (nonatomic, readonly) bool hasDetails;
@property (nonatomic, readonly) bool hasDynamicForm;
@property (nonatomic, readonly) bool hasParentFeedbackId;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *parentFeedbackId;
@property (nonatomic) int type;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)clearSensitiveFields:(unsigned long long)arg1;
- (void)clearUnknownFields:(bool)arg1;
- (id)clientSubmissionUuid;
- (id)commonContext;
- (id)commonCorrections;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)details;
- (id)dictionaryRepresentation;
- (id)dynamicForm;
- (bool)hasClientSubmissionUuid;
- (bool)hasCommonContext;
- (bool)hasCommonCorrections;
- (bool)hasDetails;
- (bool)hasDynamicForm;
- (bool)hasGreenTeaWithValue:(bool)arg1;
- (bool)hasParentFeedbackId;
- (bool)hasType;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (id)parentFeedbackId;
- (void)readAll:(bool)arg1;
- (bool)readFrom:(id)arg1;
- (void)setClientSubmissionUuid:(id)arg1;
- (void)setCommonContext:(id)arg1;
- (void)setCommonCorrections:(id)arg1;
- (void)setDetails:(id)arg1;
- (void)setDynamicForm:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setParentFeedbackId:(id)arg1;
- (void)setType:(int)arg1;
- (int)type;
- (id)typeAsString:(int)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
