
@interface STIntroCommunicationSafetyViewController : OBWelcomeController {
    id /* block */  _continueHandler;
    STIntroductionViewModel * _model;
}

@property (readonly, copy) id /* block */ continueHandler;
@property (readonly) STIntroductionViewModel *model;

- (void).cxx_destruct;
- (void)_openCommunicationSafetyLearnMoreLink;
- (void)_turnOnCommunicationSafety:(id)arg1;
- (id /* block */)continueHandler;
- (id)initWithIntroductionModel:(id)arg1 childName:(id)arg2 continueHandler:(id /* block */)arg3;
- (void)loadView;
- (id)model;

@end
