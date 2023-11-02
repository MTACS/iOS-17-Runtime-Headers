
@interface _CDSuggestedPerson : NSObject {
    _CDContact * _contact;
    NSString * _interactionBundleID;
    NSArray * _interactions;
    double  _rank;
    double  _score;
}

@property (retain) _CDContact *contact;
@property (retain) NSString *interactionBundleID;
@property (retain) NSArray *interactions;
@property double rank;
@property double score;

- (void).cxx_destruct;
- (id)contact;
- (id)description;
- (id)interactionBundleID;
- (id)interactions;
- (double)rank;
- (double)score;
- (void)setContact:(id)arg1;
- (void)setInteractionBundleID:(id)arg1;
- (void)setInteractions:(id)arg1;
- (void)setRank:(double)arg1;
- (void)setScore:(double)arg1;

@end
