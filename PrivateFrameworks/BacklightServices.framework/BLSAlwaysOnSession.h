
@interface BLSAlwaysOnSession : NSObject <BSInvalidatable> {
    <BLSBacklightSceneEnvironment> * _environment;
    BLSFrameSpecifierModel * _model;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) <BLSBacklightSceneEnvironment> *environment;
@property (readonly) unsigned long long hash;
@property (retain) BLSFrameSpecifierModel *model;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)description;
- (void)desiredFidelityForDateInterval:(id)arg1 timelines:(id)arg2 withCompletion:(id /* block */)arg3;
- (id)environment;
- (id)initWithEnvironment:(id)arg1;
- (void)invalidate;
- (id)model;
- (void)performFrameSpecifiersRequest:(id)arg1 timelines:(id)arg2;
- (void)setModel:(id)arg1;
- (id)specifierForPresentationDate:(id)arg1;

@end
