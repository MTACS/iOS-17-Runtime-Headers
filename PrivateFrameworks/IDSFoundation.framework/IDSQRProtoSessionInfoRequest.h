
@interface IDSQRProtoSessionInfoRequest : PBRequest <NSCopying> {
    bool  _allWildcardSubscription;
    unsigned int  _commandFlags;
    unsigned int  _generationCounter;
    struct { 
        unsigned int commandFlags : 1; 
        unsigned int generationCounter : 1; 
        unsigned int linkId : 1; 
        unsigned int maxConcurrentStreams : 1; 
        unsigned int requestId : 1; 
        unsigned int allWildcardSubscription : 1; 
    }  _has;
    unsigned int  _linkId;
    unsigned int  _maxConcurrentStreams;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _publishedStreamIds;
    unsigned int  _requestId;
    NSMutableArray * _subscribedStreams;
}

@property (nonatomic) bool allWildcardSubscription;
@property (nonatomic) unsigned int commandFlags;
@property (nonatomic) unsigned int generationCounter;
@property (nonatomic) bool hasAllWildcardSubscription;
@property (nonatomic) bool hasCommandFlags;
@property (nonatomic) bool hasGenerationCounter;
@property (nonatomic) bool hasLinkId;
@property (nonatomic) bool hasMaxConcurrentStreams;
@property (nonatomic) bool hasRequestId;
@property (nonatomic) unsigned int linkId;
@property (nonatomic) unsigned int maxConcurrentStreams;
@property (nonatomic, readonly) unsigned int*publishedStreamIds;
@property (nonatomic, readonly) unsigned long long publishedStreamIdsCount;
@property (nonatomic) unsigned int requestId;
@property (nonatomic, retain) NSMutableArray *subscribedStreams;

+ (Class)subscribedStreamsType;

- (void).cxx_destruct;
- (void)addPublishedStreamIds:(unsigned int)arg1;
- (void)addSubscribedStreams:(id)arg1;
- (bool)allWildcardSubscription;
- (void)clearPublishedStreamIds;
- (void)clearSubscribedStreams;
- (unsigned int)commandFlags;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)generationCounter;
- (bool)hasAllWildcardSubscription;
- (bool)hasCommandFlags;
- (bool)hasGenerationCounter;
- (bool)hasLinkId;
- (bool)hasMaxConcurrentStreams;
- (bool)hasRequestId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (unsigned int)linkId;
- (unsigned int)maxConcurrentStreams;
- (void)mergeFrom:(id)arg1;
- (unsigned int*)publishedStreamIds;
- (unsigned int)publishedStreamIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)publishedStreamIdsCount;
- (bool)readFrom:(id)arg1;
- (unsigned int)requestId;
- (void)setAllWildcardSubscription:(bool)arg1;
- (void)setCommandFlags:(unsigned int)arg1;
- (void)setGenerationCounter:(unsigned int)arg1;
- (void)setHasAllWildcardSubscription:(bool)arg1;
- (void)setHasCommandFlags:(bool)arg1;
- (void)setHasGenerationCounter:(bool)arg1;
- (void)setHasLinkId:(bool)arg1;
- (void)setHasMaxConcurrentStreams:(bool)arg1;
- (void)setHasRequestId:(bool)arg1;
- (void)setLinkId:(unsigned int)arg1;
- (void)setMaxConcurrentStreams:(unsigned int)arg1;
- (void)setPublishedStreamIds:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setRequestId:(unsigned int)arg1;
- (void)setSubscribedStreams:(id)arg1;
- (id)subscribedStreams;
- (id)subscribedStreamsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscribedStreamsCount;
- (void)writeTo:(id)arg1;

@end
