
@interface RTInferredMapItem : NSObject <NSCopying, NSSecureCoding> {
    double  _confidence;
    RTMapItem * _mapItem;
    unsigned long long  _source;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) RTMapItem *mapItem;
@property (nonatomic, readonly) unsigned long long source;

+ (double)consolidatedConfidenceFromConfidences:(id)arg1;
+ (unsigned long long)consolidatedSourceFromInferredMapItems:(id)arg1;
+ (id)dedupeInferredMapItems:(id)arg1;
+ (bool)hasKnownTypeItem:(id)arg1;
+ (id)heaviestMapItemFrom:(id)arg1 closestToLocation:(id)arg2 distanceCalculator:(id)arg3 error:(id*)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithMapItem:(id)arg1 confidence:(double)arg2 source:(unsigned long long)arg3;
- (bool)isEqual:(id)arg1;
- (id)mapItem;
- (unsigned long long)source;

@end
