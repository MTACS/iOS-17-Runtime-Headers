
@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _feedbackComponentTypes;
    NSMutableArray * _feedbackIds;
    struct { 
        unsigned int read_unknownFields : 1; 
        unsigned int read_feedbackComponentTypes : 1; 
        unsigned int read_feedbackIds : 1; 
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

@property (nonatomic, readonly) int*feedbackComponentTypes;
@property (nonatomic, readonly) unsigned long long feedbackComponentTypesCount;
@property (nonatomic, retain) NSMutableArray *feedbackIds;
@property (nonatomic, readonly) PBUnknownFields *unknownFields;

+ (Class)feedbackIdType;
+ (bool)isValid:(id)arg1;

- (void).cxx_destruct;
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)addFeedbackId:(id)arg1;
- (void)clearFeedbackComponentTypes;
- (void)clearFeedbackIds;
- (void)clearUnknownFields:(bool)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (int*)feedbackComponentTypes;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (unsigned long long)feedbackComponentTypesCount;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;
- (id)feedbackIds;
- (unsigned long long)feedbackIdsCount;
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
- (void)setFeedbackComponentTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setFeedbackIds:(id)arg1;
- (id)unknownFields;
- (void)writeTo:(id)arg1;

@end
