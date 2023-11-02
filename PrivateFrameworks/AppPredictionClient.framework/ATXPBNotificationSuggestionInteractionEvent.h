
@interface ATXPBNotificationSuggestionInteractionEvent : PBCodable <NSCopying> {
    int  _eventType;
    struct { 
        unsigned int secondsSinceReferenceDate : 1; 
        unsigned int eventType : 1; 
        unsigned int suggestionType : 1; 
    }  _has;
    double  _secondsSinceReferenceDate;
    int  _suggestionType;
    NSString * _suggestionUUID;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
