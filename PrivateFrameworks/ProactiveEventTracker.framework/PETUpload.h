
@interface PETUpload : PBCodable <NSCopying> {
    NSMutableArray * _aggregatedMessages;
    NSData * _compressedData;
    NSData * _compressedMessages;
    struct { 
        unsigned int isCompressed : 1; 
    }  _has;
    bool  _isCompressed;
    PETMetadata * _metadata;
    NSMutableArray * _unaggregatedMessages;
}

@property (nonatomic, retain) NSMutableArray *aggregatedMessages;
@property (nonatomic, retain) NSData *compressedData;
@property (nonatomic, retain) NSData *compressedMessages;
@property (nonatomic, readonly) bool hasCompressedData;
@property (nonatomic, readonly) bool hasCompressedMessages;
@property (nonatomic) bool hasIsCompressed;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic) bool isCompressed;
@property (nonatomic, retain) PETMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *unaggregatedMessages;

+ (Class)aggregatedMessagesType;
+ (Class)unaggregatedMessagesType;

- (void).cxx_destruct;
- (void)addAggregatedMessages:(id)arg1;
- (void)addUnaggregatedMessages:(id)arg1;
- (id)aggregatedMessages;
- (id)aggregatedMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)aggregatedMessagesCount;
- (void)clearAggregatedMessages;
- (void)clearUnaggregatedMessages;
- (id)compressedData;
- (id)compressedMessages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompressedData;
- (bool)hasCompressedMessages;
- (bool)hasIsCompressed;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (bool)isCompressed;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setAggregatedMessages:(id)arg1;
- (void)setCompressedData:(id)arg1;
- (void)setCompressedMessages:(id)arg1;
- (void)setHasIsCompressed:(bool)arg1;
- (void)setIsCompressed:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setUnaggregatedMessages:(id)arg1;
- (id)unaggregatedMessages;
- (id)unaggregatedMessagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)unaggregatedMessagesCount;
- (void)writeTo:(id)arg1;

@end
