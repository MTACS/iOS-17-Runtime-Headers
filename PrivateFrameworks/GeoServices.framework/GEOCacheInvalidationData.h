
@interface GEOCacheInvalidationData : NSObject <NSSecureCoding> {
    double  _timestamp;
    double  _ttl;
    unsigned int  _version;
    NSArray * _versionDomains;
}

@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) double ttl;
@property (nonatomic, readonly) unsigned int version;
@property (nonatomic, readonly) NSArray *versionDomains;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_isKey:(id)arg1 subsetOf:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned int)arg3 domains:(id)arg4;
- (bool)isInvalidatedByServiceVersion:(unsigned int)arg1 domains:(id)arg2;
- (double)timestamp;
- (double)ttl;
- (unsigned int)version;
- (id)versionDomains;

@end
