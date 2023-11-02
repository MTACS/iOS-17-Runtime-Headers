
@interface STEyeReliefIntroHowItWorksViewController : OBWelcomeController {
    id /* block */  _completionHandler;
    bool  _forChecklistFlow;
}

@property (copy) id /* block */ completionHandler;
@property bool forChecklistFlow;

- (void).cxx_destruct;
- (void)_enable;
- (id /* block */)completionHandler;
- (bool)forChecklistFlow;
- (id)initForChecklistFlow:(bool)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)setCompletionHandler:(id /* block */)arg1;
- (void)setForChecklistFlow:(bool)arg1;
- (void)viewDidLoad;

@end
