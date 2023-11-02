
@interface HKOnboardingPage : NSObject {
    bool  _lastPage;
    long long  _sequencePage;
    Class  _viewControllerClass;
}

@property (nonatomic) bool lastPage;
@property (nonatomic, readonly) long long sequencePage;
@property (nonatomic, readonly) Class viewControllerClass;

- (void).cxx_destruct;
- (id)initWithViewControllerClass:(Class)arg1 sequencePage:(long long)arg2;
- (bool)lastPage;
- (long long)sequencePage;
- (void)setLastPage:(bool)arg1;
- (Class)viewControllerClass;

@end
