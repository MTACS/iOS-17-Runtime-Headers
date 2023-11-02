
@interface IXAppInstallObjectsMetadata : NSObject {
    unsigned long long  _count;
    NSHashTable * _instances;
}

@property (nonatomic) unsigned long long count;
@property (nonatomic, retain) NSHashTable *instances;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)instances;
- (void)setCount:(unsigned long long)arg1;
- (void)setInstances:(id)arg1;

@end
