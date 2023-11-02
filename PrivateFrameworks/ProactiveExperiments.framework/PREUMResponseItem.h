
@interface PREUMResponseItem : PBCodable <NSCopying> {
    struct { 
        unsigned int modelId : 1; 
        unsigned int replyTextId : 1; 
        unsigned int responseClassId : 1; 
        unsigned int isCustomResponse : 1; 
        unsigned int isRobotResponse : 1; 
    }  _has;
    bool  _isCustomResponse;
    bool  _isRobotResponse;
    unsigned int  _modelId;
    unsigned int  _replyTextId;
    unsigned int  _responseClassId;
}

@property (nonatomic) bool hasIsCustomResponse;
@property (nonatomic) bool hasIsRobotResponse;
@property (nonatomic) bool hasModelId;
@property (nonatomic) bool hasReplyTextId;
@property (nonatomic) bool hasResponseClassId;
@property (nonatomic) bool isCustomResponse;
@property (nonatomic) bool isRobotResponse;
@property (nonatomic) unsigned int modelId;
@property (nonatomic) unsigned int replyTextId;
@property (nonatomic) unsigned int responseClassId;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsCustomResponse;
- (bool)hasIsRobotResponse;
- (bool)hasModelId;
- (bool)hasReplyTextId;
- (bool)hasResponseClassId;
- (unsigned long long)hash;
- (bool)isCustomResponse;
- (bool)isEqual:(id)arg1;
- (bool)isRobotResponse;
- (void)mergeFrom:(id)arg1;
- (unsigned int)modelId;
- (bool)readFrom:(id)arg1;
- (unsigned int)replyTextId;
- (unsigned int)responseClassId;
- (void)setHasIsCustomResponse:(bool)arg1;
- (void)setHasIsRobotResponse:(bool)arg1;
- (void)setHasModelId:(bool)arg1;
- (void)setHasReplyTextId:(bool)arg1;
- (void)setHasResponseClassId:(bool)arg1;
- (void)setIsCustomResponse:(bool)arg1;
- (void)setIsRobotResponse:(bool)arg1;
- (void)setModelId:(unsigned int)arg1;
- (void)setReplyTextId:(unsigned int)arg1;
- (void)setResponseClassId:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
