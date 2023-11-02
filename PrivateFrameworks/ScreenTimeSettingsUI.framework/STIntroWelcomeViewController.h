
@interface STIntroWelcomeViewController : OBWelcomeController {
    NSString * _childName;
    id /* block */  _continueHandler;
    id /* block */  _endHandler;
    bool  _forceParentalControls;
}

@property (readonly, copy) NSString *childName;
@property (readonly, copy) id /* block */ continueHandler;
@property (readonly, copy) id /* block */ endHandler;
@property (readonly) bool forceParentalControls;

- (void).cxx_destruct;
- (void)_turnOnScreenTime:(id)arg1;
- (id)childName;
- (id /* block */)continueHandler;
- (id /* block */)endHandler;
- (bool)forceParentalControls;
- (id)initWithChildName:(id)arg1 forceParentalControls:(bool)arg2 continueHandler:(id /* block */)arg3 endHandler:(id /* block */)arg4;
- (void)loadView;

@end
