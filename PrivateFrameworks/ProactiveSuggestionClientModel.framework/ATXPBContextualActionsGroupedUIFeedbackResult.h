
@interface ATXPBContextualActionsGroupedUIFeedbackResult : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionGroupedUIFeedbackResult * _groupedUIFeedbackResults;
    struct { 
        unsigned int numManuallyAddedSteps : 1; 
        unsigned int numShortcutsAtEnd : 1; 
        unsigned int numShortcutsAtStart : 1; 
    }  _has;
    unsigned long long  _numManuallyAddedSteps;
    unsigned long long  _numShortcutsAtEnd;
    unsigned long long  _numShortcutsAtStart;
}

@property (nonatomic, retain) ATXPBProactiveSuggestionGroupedUIFeedbackResult *groupedUIFeedbackResults;
@property (nonatomic, readonly) bool hasGroupedUIFeedbackResults;
@property (nonatomic) bool hasNumManuallyAddedSteps;
@property (nonatomic) bool hasNumShortcutsAtEnd;
@property (nonatomic) bool hasNumShortcutsAtStart;
@property (nonatomic) unsigned long long numManuallyAddedSteps;
@property (nonatomic) unsigned long long numShortcutsAtEnd;
@property (nonatomic) unsigned long long numShortcutsAtStart;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)groupedUIFeedbackResults;
- (bool)hasGroupedUIFeedbackResults;
- (bool)hasNumManuallyAddedSteps;
- (bool)hasNumShortcutsAtEnd;
- (bool)hasNumShortcutsAtStart;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)numManuallyAddedSteps;
- (unsigned long long)numShortcutsAtEnd;
- (unsigned long long)numShortcutsAtStart;
- (bool)readFrom:(id)arg1;
- (void)setGroupedUIFeedbackResults:(id)arg1;
- (void)setHasNumManuallyAddedSteps:(bool)arg1;
- (void)setHasNumShortcutsAtEnd:(bool)arg1;
- (void)setHasNumShortcutsAtStart:(bool)arg1;
- (void)setNumManuallyAddedSteps:(unsigned long long)arg1;
- (void)setNumShortcutsAtEnd:(unsigned long long)arg1;
- (void)setNumShortcutsAtStart:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
