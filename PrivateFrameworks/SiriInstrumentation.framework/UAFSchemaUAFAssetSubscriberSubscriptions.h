
@interface UAFSchemaUAFAssetSubscriberSubscriptions : SISchemaInstrumentationMessage {
    bool  _hasSubscriberName;
    NSString * _subscriberName;
    NSArray * _subscriptions;
}

@property (nonatomic) bool hasSubscriberName;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *subscriberName;
@property (nonatomic, copy) NSArray *subscriptions;

- (void).cxx_destruct;
- (void)addSubscriptions:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearSubscriptions;
- (void)deleteSubscriberName;
- (void)deleteSubscriptions;
- (id)dictionaryRepresentation;
- (bool)hasSubscriberName;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasSubscriberName:(bool)arg1;
- (void)setSubscriberName:(id)arg1;
- (void)setSubscriptions:(id)arg1;
- (id)subscriberName;
- (id)subscriptions;
- (id)subscriptionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subscriptionsCount;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
