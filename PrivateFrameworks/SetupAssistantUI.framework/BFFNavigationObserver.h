
@interface BFFNavigationObserver : NSObject {
    <BFFNavigationControllerDelegate> * _observer;
}

@property (nonatomic) <BFFNavigationControllerDelegate> *observer;

+ (id)observerWithObserver:(id)arg1;

- (void).cxx_destruct;
- (id)observer;
- (void)setObserver:(id)arg1;

@end
