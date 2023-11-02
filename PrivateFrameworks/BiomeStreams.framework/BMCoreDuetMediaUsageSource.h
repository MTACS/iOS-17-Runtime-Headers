
@interface BMCoreDuetMediaUsageSource : BMSource {
    <BMCoreDuetMediaUsageStore> * _storage;
}

@property (nonatomic, retain) <BMCoreDuetMediaUsageStore> *storage;

- (void).cxx_destruct;
- (id)initWithIdentifier:(id)arg1;
- (void)sendEvent:(id)arg1;
- (void)setStorage:(id)arg1;
- (id)storage;

@end
