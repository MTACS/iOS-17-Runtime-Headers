
@interface HDMCDeviationInputManager : NSObject {
    HDKeyValueDomain * _analyticsKeyValueDomain;
    HDKeyValueDomain * _keyValueDomain;
    HDProfile * _profile;
}

- (void).cxx_destruct;
- (bool)clearStateIfNecessaryFromSettings:(id)arg1 usageRequirementsSatisfied:(bool)arg2 error:(id*)arg3;
- (id)initWithProfile:(id)arg1;

@end
