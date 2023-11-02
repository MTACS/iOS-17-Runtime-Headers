
@protocol CNACTStewieFacade <NSObject>

@required

- (NSArray *)avocetTerms;
- (NSArray *)emergencyTerms;
- (bool)isAvocetEnabled;
- (bool)isEmergencyEnabled;

@end
