
@interface SGCuratedChangeNotificationsBaseListener : NSObject {
    NSMapTable * _liveObserversMap;
}

- (void).cxx_destruct;
- (void)addObserver:(id /* block */)arg1 forObjectLifetime:(id)arg2;
- (void)dealloc;
- (void)fire;
- (id)init;
- (void)startListening;
- (void)stopListening;

@end
