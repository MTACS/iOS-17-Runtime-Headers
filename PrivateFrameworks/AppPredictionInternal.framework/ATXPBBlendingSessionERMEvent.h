
@interface ATXPBBlendingSessionERMEvent : PBCodable <NSCopying> {
    NSMutableArray * _blendingUpdateUUIDs;
    NSString * _consumerSubType;
    int  _engagementType;
    NSString * _executableId;
    struct { 
        unsigned int engagementType : 1; 
    }  _has;
}

@property (nonatomic, retain) NSMutableArray *blendingUpdateUUIDs;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic) int engagementType;
@property (nonatomic, retain) NSString *executableId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasEngagementType;
@property (nonatomic, readonly) bool hasExecutableId;

+ (Class)blendingUpdateUUIDType;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (void)addBlendingUpdateUUID:(id)arg1;
- (id)blendingUpdateUUIDAtIndex:(unsigned long long)arg1;
- (id)blendingUpdateUUIDs;
- (unsigned long long)blendingUpdateUUIDsCount;
- (void)clearBlendingUpdateUUIDs;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (id)executableId;
- (bool)hasConsumerSubType;
- (bool)hasEngagementType;
- (bool)hasExecutableId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBlendingUpdateUUIDs:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setEngagementType:(int)arg1;
- (void)setExecutableId:(id)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)writeTo:(id)arg1;

@end
