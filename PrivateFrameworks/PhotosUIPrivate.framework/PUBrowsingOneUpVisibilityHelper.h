
@interface PUBrowsingOneUpVisibilityHelper : NSObject <PUBrowsingViewModelChangeObserver> {
    PUBrowsingViewModel * _browsingViewModel;
    bool  _isOneUpVisible;
    bool  _isPresentedForSecondScreen;
}

@property (nonatomic, retain) PUBrowsingViewModel *browsingViewModel;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isOneUpVisible;
@property (nonatomic, readonly) bool isPresentedForSecondScreen;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)browsingViewModel;
- (void)dealloc;
- (id)initWithBrowsingViewModel:(id)arg1 isPresentedForSecondScreen:(bool)arg2;
- (bool)isOneUpVisible;
- (bool)isPresentedForSecondScreen;
- (void)setBrowsingViewModel:(id)arg1;
- (void)setIsOneUpVisible:(bool)arg1;

@end
