
@interface GEOOfflineDataKey : NSObject <GEOXPCSerializable, NSCopying> {
    unsigned int  _layer;
    NSData * _serviceKey;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned int layer;
@property (nonatomic, readonly) NSData *serviceKey;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeToXPCDictionary:(id)arg1;
- (unsigned long long)hash;
- (id)initWithLayer:(unsigned int)arg1 serviceKey:(id)arg2;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned int)layer;
- (id)serviceKey;

@end
