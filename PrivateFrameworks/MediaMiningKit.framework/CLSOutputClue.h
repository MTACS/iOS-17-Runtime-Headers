
@interface CLSOutputClue : CLSClue {
    CLSEvent * _relatedEvent;
    NSMutableArray * _relatedInputLocationClues;
    NSMutableArray * _relatedInputPeopleClues;
    NSMutableArray * _relatedInputTimeClues;
    CLSPersonIdentity * _relatedPerson;
    CLSPlace * _relatedPlace;
}

@property (retain) CLSEvent *relatedEvent;
@property (retain) CLSPersonIdentity *relatedPerson;
@property (retain) CLSPlace *relatedPlace;

+ (id)clueWithValue:(id)arg1 forKey:(id)arg2;
+ (id)clueWithValue:(id)arg1 forKey:(id)arg2 confidence:(double)arg3 relevance:(double)arg4;

- (void).cxx_destruct;
- (void)addRelatedInputClues:(id)arg1;
- (id)description;
- (id)init;
- (bool)isEqualToClue:(id)arg1;
- (id)relatedEvent;
- (id)relatedInputClues;
- (id)relatedInputLocationClues;
- (id)relatedInputPeopleClues;
- (id)relatedInputTimeClues;
- (id)relatedPerson;
- (id)relatedPlace;
- (void)setRelatedEvent:(id)arg1;
- (void)setRelatedPerson:(id)arg1;
- (void)setRelatedPlace:(id)arg1;

@end
