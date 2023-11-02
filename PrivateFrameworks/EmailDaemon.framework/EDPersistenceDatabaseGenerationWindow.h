
@interface EDPersistenceDatabaseGenerationWindow : NSObject {
    long long  _earliestGeneration;
    long long  _latestGeneration;
}

@property (nonatomic, readonly) long long earliestGeneration;
@property (nonatomic, readonly) long long latestGeneration;

- (long long)earliestGeneration;
- (id)init;
- (void)insertGeneration:(long long)arg1;
- (long long)latestGeneration;

@end
