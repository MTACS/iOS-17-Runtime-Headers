
@interface RPDeviceKeyValueStore_Internal : NSObject {
    void kvs;
}

@property (nonatomic, readonly) NSString *description;

- (void).cxx_destruct;
- (id)description;
- (id)getKeyValuePairsWithDomain:(id)arg1;
- (id)getValueWithDomain:(id)arg1 key:(id)arg2;
- (id)init;
- (id)isValueSensitiveWithDomain:(id)arg1 key:(id)arg2;

@end
