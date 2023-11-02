
@interface ATXPBShortcutsEditorEvent : PBCodable <NSCopying> {
    NSString * _blendingCacheId;
    double  _date;
    unsigned long long  _eventType;
    struct { 
        unsigned int date : 1; 
        unsigned int eventType : 1; 
    }  _has;
    ATXPBShortcutsEditorEventMetadata * _metadata;
    NSMutableArray * _suggestionUUIDs;
}

@property (nonatomic, retain) NSString *blendingCacheId;
@property (nonatomic) double date;
@property (nonatomic) unsigned long long eventType;
@property (nonatomic, readonly) bool hasBlendingCacheId;
@property (nonatomic) bool hasDate;
@property (nonatomic) bool hasEventType;
@property (nonatomic, readonly) bool hasMetadata;
@property (nonatomic, retain) ATXPBShortcutsEditorEventMetadata *metadata;
@property (nonatomic, retain) NSMutableArray *suggestionUUIDs;

+ (Class)suggestionUUIDsType;

- (void).cxx_destruct;
- (void)addSuggestionUUIDs:(id)arg1;
- (id)blendingCacheId;
- (void)clearSuggestionUUIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)date;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)eventType;
- (bool)hasBlendingCacheId;
- (bool)hasDate;
- (bool)hasEventType;
- (bool)hasMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metadata;
- (bool)readFrom:(id)arg1;
- (void)setBlendingCacheId:(id)arg1;
- (void)setDate:(double)arg1;
- (void)setEventType:(unsigned long long)arg1;
- (void)setHasDate:(bool)arg1;
- (void)setHasEventType:(bool)arg1;
- (void)setMetadata:(id)arg1;
- (void)setSuggestionUUIDs:(id)arg1;
- (id)suggestionUUIDs;
- (id)suggestionUUIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionUUIDsCount;
- (void)writeTo:(id)arg1;

@end
