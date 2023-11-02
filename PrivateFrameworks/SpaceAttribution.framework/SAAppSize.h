
@interface SAAppSize : NSObject <NSSecureCoding> {
    unsigned long long  _FSPurgeableSize;
    unsigned long long  _appCacheSize;
    unsigned long long  _cacheDeletePluginSize;
    unsigned long long  _cloneSize;
    unsigned long long  _dataSize;
    unsigned long long  _fixedSize;
    unsigned long long  _physicalSize;
    unsigned long long  _purgeableSize;
    NSString * _vendorName;
}

@property unsigned long long FSPurgeableSize;
@property unsigned long long appCacheSize;
@property unsigned long long cacheDeletePluginSize;
@property unsigned long long cloneSize;
@property unsigned long long dataSize;
@property unsigned long long fixedSize;
@property unsigned long long physicalSize;
@property unsigned long long purgeableSize;
@property (retain) NSString *vendorName;

+ (id)newWithFixedSize:(unsigned long long)arg1 andDataSize:(unsigned long long)arg2;
+ (id)newWithFixedSize:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 cloneSize:(unsigned long long)arg3 purgeableSize:(unsigned long long)arg4 FSPurgeableSize:(unsigned long long)arg5 physicalSize:(unsigned long long)arg6 appCacheSize:(unsigned long long)arg7 CDPluginSize:(unsigned long long)arg8;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)FSPurgeableSize;
- (unsigned long long)appCacheSize;
- (unsigned long long)cacheDeletePluginSize;
- (unsigned long long)cloneSize;
- (id)copy;
- (unsigned long long)dataSize;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)fixedSize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFixedSize:(unsigned long long)arg1 dataSize:(unsigned long long)arg2 cloneSize:(unsigned long long)arg3 purgeableSize:(unsigned long long)arg4 FSPurgeableSize:(unsigned long long)arg5 physicalSize:(unsigned long long)arg6 appCacheSize:(unsigned long long)arg7 CDPluginSize:(unsigned long long)arg8;
- (unsigned long long)physicalSize;
- (unsigned long long)purgeableSize;
- (void)setAppCacheSize:(unsigned long long)arg1;
- (void)setCacheDeletePluginSize:(unsigned long long)arg1;
- (void)setCloneSize:(unsigned long long)arg1;
- (void)setDataSize:(unsigned long long)arg1;
- (void)setFSPurgeableSize:(unsigned long long)arg1;
- (void)setFixedSize:(unsigned long long)arg1;
- (void)setPhysicalSize:(unsigned long long)arg1;
- (void)setPurgeableSize:(unsigned long long)arg1;
- (void)setVendorName:(id)arg1;
- (id)vendorName;

@end
