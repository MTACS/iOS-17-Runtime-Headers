
@interface MapsSync.MapsSyncMutableBaseItem : NSObject {
    void _proxyObject;
}

@property (nonatomic, readonly) NSManagedObjectContext *context;
@property (nonatomic, copy) NSDate *createTime;
@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic) long long positionIndex;
@property (nonatomic, readonly) NSManagedObject *proxyObject;

- (void).cxx_destruct;
- (id)context;
- (id)createTime;
- (id)identifier;
- (id)init;
- (id)initWithProxyObject:(id)arg1;
- (long long)positionIndex;
- (id)proxyObject;
- (void)setCreateTime:(id)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setPositionIndex:(long long)arg1;

@end
