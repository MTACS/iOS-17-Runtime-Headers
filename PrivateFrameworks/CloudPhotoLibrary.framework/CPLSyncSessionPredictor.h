
@interface CPLSyncSessionPredictor : NSObject {
    CPLSyncSessionPrediction * _currentPrediction;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSHashTable * _observers;
}

@property (readonly) CPLSyncSessionPrediction *currentPrediction;

- (void).cxx_destruct;
- (void)addObserver:(id)arg1;
- (id)currentPrediction;
- (id)description;
- (id)init;
- (void)removeObserver:(id)arg1;
- (void)updatePredictionWithValuesAndTypes:(id)arg1;

@end
