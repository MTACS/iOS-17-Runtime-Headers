
@interface AWDCFNetworkCacheMetrics : PBCodable <NSCopying> {
    NSString * _bundleID;
    struct { 
        unsigned int timestamp : 1; 
        unsigned int totalBytesWritten : 1; 
    }  _has;
    unsigned long long  _timestamp;
    unsigned long long  _totalBytesWritten;
}

@property (nonatomic, retain) NSString *bundleID;
@property (nonatomic, readonly) bool hasBundleID;
@property (nonatomic) bool hasTimestamp;
@property (nonatomic) bool hasTotalBytesWritten;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long totalBytesWritten;

- (id)bundleID;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasBundleID;
- (bool)hasTimestamp;
- (bool)hasTotalBytesWritten;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setHasTimestamp:(bool)arg1;
- (void)setHasTotalBytesWritten:(bool)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTotalBytesWritten:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (unsigned long long)totalBytesWritten;
- (void)writeTo:(id)arg1;

@end
