
@interface SGSMMutableSearchState : NSObject {
    unsigned char  _contactConversionCount;
    unsigned char  _contactLossCount;
    unsigned short  _contactOpportunityCount;
    unsigned short  _contactResultCount;
    unsigned short  _curatedOrPseudoContactOpportunityCount;
    bool  _justEngaged;
    unsigned char  _nonOpportunityCount;
    unsigned char  _otherSelectedCount;
    NSMutableSet * _resultsSeen;
}

- (void).cxx_destruct;
- (void)commit;
- (id)description;
- (id)init;
- (bool)isFirstTimeSeeingResult:(id)arg1;
- (bool)justEngaged;
- (void)resetConversionCounts;
- (void)resetCounts;
- (void)resetJustEngaged;
- (void)scoreAsContactConversion;
- (void)scoreAsContactLoss;
- (void)scoreAsContactOpportunity;
- (void)scoreAsContactResult;
- (void)scoreAsCuratedOrPseudoContactOpportunity;
- (void)scoreAsNonOpportunity;
- (void)scoreAsOtherConversion;
- (void)setJustEngaged;

@end
