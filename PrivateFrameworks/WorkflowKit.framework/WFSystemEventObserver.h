
@interface WFSystemEventObserver : NSObject {
    bool  _invalidated;
    NSHashTable * _observers;
    NSArray * _providers;
}

@property (nonatomic) bool invalidated;
@property (nonatomic, readonly) NSHashTable *observers;
@property (nonatomic, readonly) NSArray *providers;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)initWithProviders:(id)arg1;
- (void)invalidate;
- (bool)invalidated;
- (id)observers;
- (id)providers;
- (void)removeObserver:(id)arg1;
- (void)resume;
- (void)setInvalidated:(bool)arg1;

@end
