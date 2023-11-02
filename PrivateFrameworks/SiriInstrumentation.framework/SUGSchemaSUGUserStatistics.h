
@interface SUGSchemaSUGUserStatistics : SISchemaInstrumentationMessage {
    struct { 
        unsigned int isTwoByThreeUser : 1; 
    }  _has;
    bool  _hasTotalPreviousSuggestionsShown;
    bool  _hasTotalSiriHelpRequests;
    bool  _hasTotalSiriRequests;
    bool  _hasTotalUniqueSiriEventTypes;
    bool  _isTwoByThreeUser;
    SUGSchemaSUGAggregateCounts * _totalPreviousSuggestionsShown;
    SUGSchemaSUGAggregateCounts * _totalSiriHelpRequests;
    SUGSchemaSUGAggregateCounts * _totalSiriRequests;
    SUGSchemaSUGAggregateCounts * _totalUniqueSiriEventTypes;
}

@property (nonatomic) bool hasIsTwoByThreeUser;
@property (nonatomic) bool hasTotalPreviousSuggestionsShown;
@property (nonatomic) bool hasTotalSiriHelpRequests;
@property (nonatomic) bool hasTotalSiriRequests;
@property (nonatomic) bool hasTotalUniqueSiriEventTypes;
@property (nonatomic) bool isTwoByThreeUser;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SUGSchemaSUGAggregateCounts *totalPreviousSuggestionsShown;
@property (nonatomic, retain) SUGSchemaSUGAggregateCounts *totalSiriHelpRequests;
@property (nonatomic, retain) SUGSchemaSUGAggregateCounts *totalSiriRequests;
@property (nonatomic, retain) SUGSchemaSUGAggregateCounts *totalUniqueSiriEventTypes;

- (void).cxx_destruct;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)deleteIsTwoByThreeUser;
- (void)deleteTotalPreviousSuggestionsShown;
- (void)deleteTotalSiriHelpRequests;
- (void)deleteTotalSiriRequests;
- (void)deleteTotalUniqueSiriEventTypes;
- (id)dictionaryRepresentation;
- (bool)hasIsTwoByThreeUser;
- (bool)hasTotalPreviousSuggestionsShown;
- (bool)hasTotalSiriHelpRequests;
- (bool)hasTotalSiriRequests;
- (bool)hasTotalUniqueSiriEventTypes;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isTwoByThreeUser;
- (id)jsonData;
- (bool)readFrom:(id)arg1;
- (void)setHasIsTwoByThreeUser:(bool)arg1;
- (void)setHasTotalPreviousSuggestionsShown:(bool)arg1;
- (void)setHasTotalSiriHelpRequests:(bool)arg1;
- (void)setHasTotalSiriRequests:(bool)arg1;
- (void)setHasTotalUniqueSiriEventTypes:(bool)arg1;
- (void)setIsTwoByThreeUser:(bool)arg1;
- (void)setTotalPreviousSuggestionsShown:(id)arg1;
- (void)setTotalSiriHelpRequests:(id)arg1;
- (void)setTotalSiriRequests:(id)arg1;
- (void)setTotalUniqueSiriEventTypes:(id)arg1;
- (id)suppressMessageUnderConditions;
- (id)totalPreviousSuggestionsShown;
- (id)totalSiriHelpRequests;
- (id)totalSiriRequests;
- (id)totalUniqueSiriEventTypes;
- (void)writeTo:(id)arg1;

@end
