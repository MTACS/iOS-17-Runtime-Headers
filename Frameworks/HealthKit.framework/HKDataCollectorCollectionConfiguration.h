
@interface HKDataCollectorCollectionConfiguration : NSObject <NSCopying, NSSecureCoding> {
    double  _collectionInterval;
    double  _collectionLatency;
    unsigned long long  _collectionType;
}

@property (nonatomic) double collectionInterval;
@property (nonatomic) double collectionLatency;
@property (nonatomic) unsigned long long collectionType;

+ (id)new;
+ (bool)supportsSecureCoding;

- (double)collectionInterval;
- (double)collectionLatency;
- (unsigned long long)collectionType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionInterval:(double)arg1 collectionLatency:(double)arg2 collectionType:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (void)setCollectionInterval:(double)arg1;
- (void)setCollectionLatency:(double)arg1;
- (void)setCollectionType:(unsigned long long)arg1;

@end
