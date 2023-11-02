
@interface SLDCloudKitSyncPersistence : NSObject {
    NSMutableDictionary * _cache;
    NSUserDefaults * _defaults;
    NSString * _name;
    id  _nilValue;
    NSString * _suiteName;
}

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (void)reset;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;

@end
