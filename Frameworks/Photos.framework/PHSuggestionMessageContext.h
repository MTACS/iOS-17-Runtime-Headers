
@interface PHSuggestionMessageContext : NSObject {
    NSArray * _cnParticipants;
    NSDateInterval * _dateInterval;
    NSArray * _messageTokens;
    NSArray * _messages;
    unsigned long long  _numberOfParticipants;
    NSArray * _phParticipants;
    PHPhotoLibrary * _photoLibrary;
    NSArray * _resolvedParticipants;
    NSMutableDictionary * _suggestionMatchingResultsBySuggestionIdentifier;
}

@property (nonatomic, readonly) NSArray *cnParticipants;
@property (nonatomic, readonly) NSDateInterval *dateInterval;
@property (nonatomic, retain) NSArray *messageTokens;
@property (nonatomic, readonly) NSArray *messages;
@property (nonatomic, readonly) unsigned long long numberOfParticipants;
@property (nonatomic, readonly) NSArray *phParticipants;
@property (nonatomic, retain) PHPhotoLibrary *photoLibrary;
@property (nonatomic, retain) NSArray *resolvedParticipants;
@property (nonatomic, readonly) NSMutableDictionary *suggestionMatchingResultsBySuggestionIdentifier;

- (void).cxx_destruct;
- (id)_mostRecentSuggestionFromSuggestions:(id)arg1;
- (id)_suggestionsMatchingType:(long long)arg1;
- (id)cnParticipants;
- (id)confidentMatchSuggestionUsingStrategy:(unsigned long long)arg1;
- (id)dateInterval;
- (id)description;
- (id)detailedDescription;
- (id)initWithMessages:(id)arg1;
- (id)initWithMessages:(id)arg1 participantsFromContacts:(id)arg2 photoLibrary:(id)arg3;
- (id)initWithMessages:(id)arg1 participantsFromPersons:(id)arg2 photoLibrary:(id)arg3;
- (void)matchWithSuggestions:(id)arg1;
- (id)matchingResultWithSuggestion:(id)arg1;
- (id)messageTokens;
- (id)messages;
- (unsigned long long)numberOfParticipants;
- (id)phParticipants;
- (id)photoLibrary;
- (id)resolvedParticipants;
- (void)setCnParticipants:(id)arg1;
- (void)setMessageTokens:(id)arg1;
- (void)setPhParticipants:(id)arg1;
- (void)setPhotoLibrary:(id)arg1;
- (void)setResolvedParticipants:(id)arg1;
- (id)suggestionMatchingResultsBySuggestionIdentifier;

@end
