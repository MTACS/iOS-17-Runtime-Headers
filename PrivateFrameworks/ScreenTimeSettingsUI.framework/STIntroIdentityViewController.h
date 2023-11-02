
@interface STIntroIdentityViewController : OBWelcomeController {
    id /* block */  _continueHandler;
    STIntroductionViewModel * _model;
}

@property (readonly, copy) id /* block */ continueHandler;
@property (readonly) STIntroductionViewModel *model;

- (void).cxx_destruct;
- (void)_myChildsDevice:(id)arg1;
- (void)_myDevice:(id)arg1;
- (id /* block */)continueHandler;
- (id)initWithIntroductionModel:(id)arg1 continueHandler:(id /* block */)arg2;
- (void)loadView;
- (id)model;

@end
