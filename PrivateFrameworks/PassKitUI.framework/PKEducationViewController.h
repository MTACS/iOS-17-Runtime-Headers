
@interface PKEducationViewController : PKExplanationViewController <PKExplanationViewDelegate, PKFieldDetectSuppressor, PKLoadingUIProviding> {
    unsigned long long  _biometricAuthenticationType;
    NSString * _bodyAddition;
    id /* block */  _continueHandler;
    PKEducationPhone * _educationBodyView;
    unsigned long long  _educationContext;
    PKPaymentHeroImageController * _heroImageController;
    UIView * _heroPadBackground;
    UIImageView * _heroPadImageView;
    bool  _invalidated;
    PKSecureElementPass * _paymentPass;
    NSString * _titleOverride;
    bool  _wasNavigationBarHidden;
}

@property (nonatomic, copy) NSString *bodyAddition;
@property (nonatomic, copy) id /* block */ continueHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool suppressFieldDetect;
@property (nonatomic, copy) NSString *titleOverride;

+ (id)assetBackgroundColor;
+ (id)assetBackgroundColorPad;
+ (bool)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2;
+ (bool)shouldPresentForPass:(id)arg1 inEducationContext:(unsigned long long)arg2 reason:(id*)arg3;

- (void).cxx_destruct;
- (bool)_canShowWhileLocked;
- (id)_heroPadImage;
- (id)bodyAddition;
- (id /* block */)continueHandler;
- (void)dealloc;
- (void)explanationViewDidSelectContinue:(id)arg1;
- (id)init;
- (id)initWithPaymentPass:(id)arg1 setupContext:(long long)arg2 educationContext:(unsigned long long)arg3;
- (void)invalidate;
- (void)loadView;
- (void)performContinue;
- (void)setBodyAddition:(id)arg1;
- (void)setContinueHandler:(id /* block */)arg1;
- (void)setTitleOverride:(id)arg1;
- (void)showLoadingUI:(bool)arg1 animated:(bool)arg2;
- (bool)suppressFieldDetect;
- (id)titleOverride;
- (void)viewDidAppear:(bool)arg1;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end
