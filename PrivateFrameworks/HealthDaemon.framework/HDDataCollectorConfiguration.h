
@interface HDDataCollectorConfiguration : NSObject <NSCopying> {
    double  _collectionInterval;
    double  _collectionLatency;
    unsigned long long  _collectionType;
}

@property (nonatomic, readonly) double collectionInterval;
@property (nonatomic, readonly) double collectionLatency;
@property (nonatomic, readonly) unsigned long long collectionType;

+ (id)configurationWithType:(unsigned long long)arg1 aggregatorConfiguration:(id)arg2;
+ (id)configurationWithType:(unsigned long long)arg1 interval:(double)arg2 latency:(double)arg3;
+ (id)disabledConfiguration;

- (double)collectionInterval;
- (double)collectionLatency;
- (unsigned long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)mergedConfiguration:(id)arg1;

@end
