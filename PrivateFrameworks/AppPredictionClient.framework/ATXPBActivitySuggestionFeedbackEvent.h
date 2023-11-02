
@interface ATXPBActivitySuggestionFeedbackEvent : PBCodable <NSCopying> {
    ATXPBActivity * _activity;
    double  _date;
    int  _eventType;
    struct { 
        unsigned int date : 1; 
        unsigned int eventType : 1; 
        unsigned int location : 1; 
        unsigned int suggestionType : 1; 
    }  _has;
    int  _location;
    NSMutableArray * _serializedAcceptedTriggers;
    int  _suggestionType;
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
