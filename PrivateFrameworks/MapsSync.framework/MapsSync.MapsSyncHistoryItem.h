
@interface MapsSync.MapsSyncHistoryItem : MapsSync.MapsSyncBaseItem {
    void _position;
}

@property (nonatomic, readonly) double position;

+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completion:(id /* block */)arg6;
+ (void)fetch:(long long)arg1 :(long long)arg2 :(id)arg3 sort:(long long)arg4 ascending:(bool)arg5 completionWithError:(id /* block */)arg6;
+ (id)fetchHistoryItemForIdentifier:(id)arg1;

- (void)addEditWithBlock:(id /* block */)arg1;
- (id)initWithObject:(id)arg1;
- (bool)isEqual:(id)arg1;
- (Class)managedObjectClass;
- (Class)mutableObjectClass;
- (double)position;
- (void)setPropertiesWithObject:(id)arg1;

@end
