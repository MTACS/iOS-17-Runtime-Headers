
@interface CACContextCluesWelcomeController : OBTextWelcomeController {
    <CACContextCluesWelcomeControllerDelegate> * _delegate;
}

@property (nonatomic) <CACContextCluesWelcomeControllerDelegate> *delegate;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
