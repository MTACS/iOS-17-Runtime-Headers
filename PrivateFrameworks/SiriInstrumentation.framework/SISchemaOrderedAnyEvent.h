
@interface SISchemaOrderedAnyEvent : SISchemaTopLevelUnionType {
    SISchemaAnyEvent * _event;
    bool  _hasEvent;
    bool  _hasMetadata;
    SISchemaCommonEventMetadata * _metadata;
}

@property (nonatomic, retain) SISchemaAnyEvent *event;
@property (nonatomic) bool hasEvent;
@property (nonatomic) bool hasMetadata;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaCommonEventMetadata *metadata;

// Image: /System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteEvent;
- (void)deleteMetadata;
- (id)dictionaryRepresentation;
- (id)event;
- (int)getAnyEventType;
- (bool)hasEvent;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (id)metadata;
- (id)qualifiedMessageName;
- (bool)readFrom:(id)arg1;
- (void)setEvent:(id)arg1;
- (void)setHasEvent:(bool)arg1;
- (void)setHasMetadata:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (id)suppressMessageUnderConditions;
- (void)unwrapMessageWithCompletion:(id /* block */)arg1;
- (void)writeTo:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SiriAnalytics.framework/SiriAnalytics

+ (id)orderedAnyEventWithAnyEvent:(id)arg1 timestamp:(id)arg2;
+ (id)orderedAnyEventWithAnyEvent:(id)arg1 timestamp:(unsigned long long)arg2 clockIdentifier:(id)arg3;

@end
