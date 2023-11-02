
@interface SXScrollObserverManager : NSObject <SXScrollObserverManager, SXScrollReporting> {
    NSHashTable * _observers;
    bool  _scrolling;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic) bool scrolling;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addScrollObserver:(id)arg1;
- (void)didScroll;
- (void)didStopScrolling;
- (id)init;
- (id)observers;
- (void)removeScrollObserver:(id)arg1;
- (bool)scrolling;
- (void)setScrolling:(bool)arg1;
- (void)willStartScrolling;

@end
