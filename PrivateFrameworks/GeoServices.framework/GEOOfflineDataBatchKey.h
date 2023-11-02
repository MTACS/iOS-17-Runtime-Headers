
@interface GEOOfflineDataBatchKey : NSObject <NSCopying> {
    NSData * _key;
    unsigned int  _layer;
}

@property (nonatomic, readonly) NSData *key;
@property (nonatomic, readonly) unsigned int layer;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithLayer:(unsigned int)arg1 key:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)key;
- (unsigned int)layer;

@end
