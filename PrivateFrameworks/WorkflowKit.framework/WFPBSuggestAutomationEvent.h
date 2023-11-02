
@interface WFPBSuggestAutomationEvent : PBCodable <NSCopying> {
    bool  _completed;
    struct { 
        unsigned int completed : 1; 
        unsigned int interacted : 1; 
    }  _has;
    bool  _interacted;
    NSString * _key;
    NSString * _source;
    NSString * _suggestedAutomationIdentifier;
}

@property (nonatomic) bool completed;
@property (nonatomic) bool hasCompleted;
@property (nonatomic) bool hasInteracted;
@property (nonatomic, readonly) bool hasKey;
@property (nonatomic, readonly) bool hasSource;
@property (nonatomic, readonly) bool hasSuggestedAutomationIdentifier;
@property (nonatomic) bool interacted;
@property (nonatomic, retain) NSString *key;
@property (nonatomic, retain) NSString *source;
@property (nonatomic, retain) NSString *suggestedAutomationIdentifier;

- (void).cxx_destruct;
- (bool)completed;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompleted;
- (bool)hasInteracted;
- (bool)hasKey;
- (bool)hasSource;
- (bool)hasSuggestedAutomationIdentifier;
- (unsigned long long)hash;
- (bool)interacted;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCompleted:(bool)arg1;
- (void)setHasCompleted:(bool)arg1;
- (void)setHasInteracted:(bool)arg1;
- (void)setInteracted:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setSuggestedAutomationIdentifier:(id)arg1;
- (id)source;
- (id)suggestedAutomationIdentifier;
- (void)writeTo:(id)arg1;

@end
