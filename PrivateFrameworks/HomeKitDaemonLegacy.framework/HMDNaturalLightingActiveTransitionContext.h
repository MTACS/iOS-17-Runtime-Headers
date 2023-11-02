
@interface HMDNaturalLightingActiveTransitionContext : HMFObject <NSCopying> {
    unsigned long long  _millisecondsElapsedSinceStartDate;
    NSDate * _startDate;
    NSNumber * _transitionChecksum;
}

@property (readonly) unsigned long long millisecondsElapsedSinceStartDate;
@property (readonly, copy) NSDate *startDate;
@property (readonly, copy) NSNumber *transitionChecksum;

- (void).cxx_destruct;
- (id)attributeDescriptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithStartDate:(id)arg1 millisecondsElapsedSinceStartDate:(unsigned long long)arg2 transitionChecksum:(id)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)millisecondsElapsedSinceStartDate;
- (id)startDate;
- (id)transitionChecksum;

@end
