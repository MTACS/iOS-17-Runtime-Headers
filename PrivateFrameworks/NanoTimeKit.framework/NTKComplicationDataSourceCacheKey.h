
@interface NTKComplicationDataSourceCacheKey : NSObject <NSCopying> {
    long long  _complicationFamily;
    unsigned long long  _complicationType;
    NSUUID * _nrDeviceUUID;
}

@property (nonatomic) long long complicationFamily;
@property (nonatomic) unsigned long long complicationType;
@property (nonatomic, retain) NSUUID *nrDeviceUUID;

- (void).cxx_destruct;
- (long long)complicationFamily;
- (unsigned long long)complicationType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)nrDeviceUUID;
- (void)setComplicationFamily:(long long)arg1;
- (void)setComplicationType:(unsigned long long)arg1;
- (void)setNrDeviceUUID:(id)arg1;

@end
