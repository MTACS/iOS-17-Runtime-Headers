
@interface NTTodayResults : NSObject <NSCopying, NSSecureCoding> {
    NSObject * _assetsHoldToken;
    NSDate * _expirationDate;
    double  _headlineScale;
    int  _promotionCriterion;
    NSObject * _recordsHoldToken;
    NSOrderedSet * _sections;
    NSString * _sourceIdentifier;
}

@property (nonatomic, readonly) NSObject *assetsHoldToken;
@property (nonatomic, readonly, copy) NSDate *expirationDate;
@property (nonatomic, readonly) double headlineScale;
@property (nonatomic, readonly) int promotionCriterion;
@property (nonatomic, readonly) NSObject *recordsHoldToken;
@property (nonatomic, readonly, copy) NSOrderedSet *sections;
@property (nonatomic, readonly, copy) NSString *sourceIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetsHoldToken;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (unsigned long long)hash;
- (double)headlineScale;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 expirationDate:(id)arg3 headlineScale:(double)arg4;
- (id)initWithSourceIdentifier:(id)arg1 sections:(id)arg2 promotionCriterion:(int)arg3 expirationDate:(id)arg4 headlineScale:(double)arg5 assetsHoldToken:(id)arg6 recordsHoldToken:(id)arg7;
- (bool)isEqual:(id)arg1;
- (unsigned long long)itemCount;
- (int)promotionCriterion;
- (id)recordsHoldToken;
- (id)sections;
- (id)sourceIdentifier;

@end
