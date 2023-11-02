
@interface MapsSync.MapsSyncObjectWrapper : NSObject <NSCopying> {
    void _callbackQueue;
    void _editContext;
    void _entityName;
    void _managedObjectID;
}

@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;

@end
