
@interface MapsSync.MapsSyncServerEvaluationStatus : MapsSync.MapsSyncBaseItem {
    void _arpStatus;
    void _rapStatus;
}

@property (nonatomic, readonly) bool arpStatus;
@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) bool rapStatus;

- (void)addEditWithBlock:(id /* block */)arg1;
- (bool)arpStatus;
- (id)description;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (bool)rapStatus;
- (void)setPropertiesWithObject:(id)arg1;

@end
