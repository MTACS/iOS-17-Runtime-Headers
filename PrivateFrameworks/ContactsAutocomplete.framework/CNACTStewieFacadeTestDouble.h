
@interface CNACTStewieFacadeTestDouble : NSObject <CNACTStewieFacade> {
    NSArray * _numbers;
    NSArray * _phrases;
}

@property (readonly) NSArray *avocetTerms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *emergencyTerms;
@property (readonly) unsigned long long hash;
@property (readonly) bool isAvocetEnabled;
@property (readonly) bool isEmergencyEnabled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithPhrases:(id)arg1 numbers:(id)arg2;
- (bool)isAvocetEnabled;
- (bool)isEmergencyEnabled;
- (id)terms;

@end
