
@interface ATXPBSpotlightUIEvent : PBCodable <NSCopying> {
    long long  _eventType;
    struct { 
        unsigned int eventType : 1; 
    }  _has;
    NSString * _suggestionContext;
    NSString * _suggestionSubtype;
    NSString * _suggestionType;
    NSString * _suggestionUniqueId;
}

@property (nonatomic) long long eventType;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasSuggestionContext;
@property (nonatomic, readonly) bool hasSuggestionSubtype;
@property (nonatomic, readonly) bool hasSuggestionType;
@property (nonatomic, readonly) bool hasSuggestionUniqueId;
@property (nonatomic, retain) NSString *suggestionContext;
@property (nonatomic, retain) NSString *suggestionSubtype;
@property (nonatomic, retain) NSString *suggestionType;
@property (nonatomic, retain) NSString *suggestionUniqueId;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (long long)eventType;
- (bool)hasEventType;
- (bool)hasSuggestionContext;
- (bool)hasSuggestionSubtype;
- (bool)hasSuggestionType;
- (bool)hasSuggestionUniqueId;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEventType:(long long)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setSuggestionContext:(id)arg1;
- (void)setSuggestionSubtype:(id)arg1;
- (void)setSuggestionType:(id)arg1;
- (void)setSuggestionUniqueId:(id)arg1;
- (id)suggestionContext;
- (id)suggestionSubtype;
- (id)suggestionType;
- (id)suggestionUniqueId;
- (void)writeTo:(id)arg1;

@end
