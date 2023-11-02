
@interface AMDSimpleHash : NSObject {
    NSMutableDictionary * _collisionMap;
    unsigned long long * _keys;
    NSData * _keysStorage;
    char * _metadata;
    NSData * _metadataStorage;
    unsigned int  _moduloBase;
    unsigned int  _numEntries;
    unsigned long long * _values;
    NSData * _valuesStorage;
}

@property (nonatomic, retain) NSMutableDictionary *collisionMap;
@property (nonatomic) unsigned long long*keys;
@property (nonatomic, retain) NSData *keysStorage;
@property (nonatomic) char *metadata;
@property (nonatomic, retain) NSData *metadataStorage;
@property (nonatomic) unsigned int moduloBase;
@property (nonatomic) unsigned int numEntries;
@property (nonatomic) unsigned long long*values;
@property (nonatomic, retain) NSData *valuesStorage;

+ (unsigned int)getBase:(unsigned int)arg1;

- (void).cxx_destruct;
- (bool)addForKey:(unsigned long long)arg1 theValue:(unsigned long long)arg2;
- (id)collisionMap;
- (unsigned int)count;
- (void)getAllKeysInto:(unsigned long long*)arg1;
- (bool)getValueForKey:(unsigned long long)arg1 into:(unsigned long long*)arg2;
- (id)initWithCapacity:(unsigned int)arg1;
- (unsigned long long*)keys;
- (id)keysStorage;
- (char *)metadata;
- (id)metadataStorage;
- (unsigned int)moduloBase;
- (unsigned int)numEntries;
- (void)removeAllKeys;
- (bool)removeKey:(unsigned long long)arg1 andSaveValueInto:(unsigned long long*)arg2;
- (void)setCollisionMap:(id)arg1;
- (void)setKeys:(unsigned long long*)arg1;
- (void)setKeysStorage:(id)arg1;
- (void)setMetadata:(char *)arg1;
- (void)setMetadataStorage:(id)arg1;
- (void)setModuloBase:(unsigned int)arg1;
- (void)setNumEntries:(unsigned int)arg1;
- (void)setValues:(unsigned long long*)arg1;
- (void)setValuesStorage:(id)arg1;
- (unsigned long long*)values;
- (id)valuesStorage;

@end
