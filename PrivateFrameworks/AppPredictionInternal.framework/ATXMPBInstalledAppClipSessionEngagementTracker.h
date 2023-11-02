
@interface ATXMPBInstalledAppClipSessionEngagementTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _consumerSubType;
    int  _engagementType;
    struct { 
        unsigned int engagementType : 1; 
        unsigned int numSuggestionsShown : 1; 
    }  _has;
    unsigned int  _numSuggestionsShown;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic) int engagementType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic) bool hasEngagementType;
@property (nonatomic) bool hasNumSuggestionsShown;
@property (nonatomic) unsigned int numSuggestionsShown;

- (void).cxx_destruct;
- (int)StringAsEngagementType:(id)arg1;
- (id)abGroup;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)engagementType;
- (id)engagementTypeAsString:(int)arg1;
- (bool)hasAbGroup;
- (bool)hasConsumerSubType;
- (bool)hasEngagementType;
- (bool)hasNumSuggestionsShown;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numSuggestionsShown;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setEngagementType:(int)arg1;
- (void)setHasEngagementType:(bool)arg1;
- (void)setHasNumSuggestionsShown:(bool)arg1;
- (void)setNumSuggestionsShown:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end
