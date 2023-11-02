
@interface ATXPBNotificationDeliveryEvent : PBCodable <NSCopying> {
    int  _deliveryUI;
    struct { 
        unsigned int deliveryUI : 1; 
    }  _has;
    NSMutableArray * _suggestionUUIDs;
}

@property (nonatomic) int deliveryUI;
@property (nonatomic) bool hasDeliveryUI;
@property (nonatomic, retain) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDType;

- (void).cxx_destruct;
- (int)StringAsDeliveryUI:(id)arg1;
- (void)addSuggestionUUID:(id)arg1;
- (void)clearSuggestionUUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)deliveryUI;
- (id)deliveryUIAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDeliveryUI;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeliveryUI:(int)arg1;
- (void)setHasDeliveryUI:(bool)arg1;
- (void)setSuggestionUUIDs:(id)arg1;
- (id)suggestionUUIDAtIndex:(unsigned long long)arg1;
- (id)suggestionUUIDs;
- (unsigned long long)suggestionUUIDsCount;
- (void)writeTo:(id)arg1;

@end
