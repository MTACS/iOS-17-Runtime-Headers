
@interface LRSchemaLRRedactionSummaryReported : SISchemaInstrumentationMessage {
    struct { 
        unsigned int hasRedactedEvents : 1; 
        unsigned int summaryCreationTimeSince1970 : 1; 
        unsigned int messageCreationTimeSince1970 : 1; 
    }  _has;
    bool  _hasPreProcessorInfo;
    bool  _hasRedactedEvents;
    double  _messageCreationTimeSince1970;
    LRSchemaLRPreprocessorInfo * _preProcessorInfo;
    NSArray * _redactionSignals;
    NSArray * _redactionWindows;
    unsigned long long  _summaryCreationTimeSince1970;
}

@property (nonatomic) bool hasHasRedactedEvents;
@property (nonatomic) bool hasMessageCreationTimeSince1970;
@property (nonatomic) bool hasPreProcessorInfo;
@property (nonatomic) bool hasRedactedEvents;
@property (nonatomic) bool hasSummaryCreationTimeSince1970;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) double messageCreationTimeSince1970;
@property (nonatomic, retain) LRSchemaLRPreprocessorInfo *preProcessorInfo;
@property (nonatomic, copy) NSArray *redactionSignals;
@property (nonatomic, copy) NSArray *redactionWindows;
@property (nonatomic) unsigned long long summaryCreationTimeSince1970;

- (void).cxx_destruct;
- (void)addRedactionSignals:(id)arg1;
- (void)addRedactionWindows:(id)arg1;
- (id)applySensitiveConditionsPolicy:(id)arg1;
- (void)clearRedactionSignals;
- (void)clearRedactionWindows;
- (void)deleteHasRedactedEvents;
- (void)deleteMessageCreationTimeSince1970;
- (void)deletePreProcessorInfo;
- (void)deleteRedactionSignals;
- (void)deleteRedactionWindows;
- (void)deleteSummaryCreationTimeSince1970;
- (id)dictionaryRepresentation;
- (bool)hasHasRedactedEvents;
- (bool)hasMessageCreationTimeSince1970;
- (bool)hasPreProcessorInfo;
- (bool)hasRedactedEvents;
- (bool)hasSummaryCreationTimeSince1970;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (double)messageCreationTimeSince1970;
- (id)preProcessorInfo;
- (bool)readFrom:(id)arg1;
- (id)redactionSignals;
- (id)redactionSignalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redactionSignalsCount;
- (id)redactionWindows;
- (id)redactionWindowsAtIndex:(unsigned long long)arg1;
- (unsigned long long)redactionWindowsCount;
- (void)setHasHasRedactedEvents:(bool)arg1;
- (void)setHasMessageCreationTimeSince1970:(bool)arg1;
- (void)setHasPreProcessorInfo:(bool)arg1;
- (void)setHasRedactedEvents:(bool)arg1;
- (void)setHasSummaryCreationTimeSince1970:(bool)arg1;
- (void)setMessageCreationTimeSince1970:(double)arg1;
- (void)setPreProcessorInfo:(id)arg1;
- (void)setRedactionSignals:(id)arg1;
- (void)setRedactionWindows:(id)arg1;
- (void)setSummaryCreationTimeSince1970:(unsigned long long)arg1;
- (unsigned long long)summaryCreationTimeSince1970;
- (id)suppressMessageUnderConditions;
- (void)writeTo:(id)arg1;

@end
