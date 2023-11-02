
@interface NSSUsageRespMsgAppBundle : PBCodable <NSCopying> {
    NSString * _bundleIdentifier;
    NSString * _bundleVersion;
    struct { 
        unsigned int supportsManualPurge : 1; 
    }  _has;
    NSString * _name;
    NSSUsageSize * _size;
    bool  _supportsManualPurge;
    NSString * _vendor;
}

@property (nonatomic, retain) NSString *bundleIdentifier;
@property (nonatomic, retain) NSString *bundleVersion;
@property (nonatomic, readonly) bool hasBundleIdentifier;
@property (nonatomic, readonly) bool hasBundleVersion;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic, readonly) bool hasSize;
@property (nonatomic) bool hasSupportsManualPurge;
@property (nonatomic, readonly) bool hasVendor;
@property (nonatomic, retain) NSString *name;
@property (nonatomic, retain) NSSUsageSize *size;
@property (nonatomic) bool supportsManualPurge;
@property (nonatomic, retain) NSString *vendor;

- (void).cxx_destruct;
- (id)bundleIdentifier;
- (id)bundleVersion;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleIdentifier;
- (bool)hasBundleVersion;
- (bool)hasName;
- (bool)hasSize;
- (bool)hasSupportsManualPurge;
- (bool)hasVendor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (void)setBundleIdentifier:(id)arg1;
- (void)setBundleVersion:(id)arg1;
- (void)setHasSupportsManualPurge:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setSize:(id)arg1;
- (void)setSupportsManualPurge:(bool)arg1;
- (void)setVendor:(id)arg1;
- (id)size;
- (bool)supportsManualPurge;
- (id)vendor;
- (void)writeTo:(id)arg1;

@end
