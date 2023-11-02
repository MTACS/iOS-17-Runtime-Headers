
@interface TPSExperiment : NSObject <NSCopying, NSSecureCoding> {
    long long  _camp;
    double  _holdoutAllocation;
    long long  _identifier;
}

@property (nonatomic) long long camp;
@property (nonatomic) double holdoutAllocation;
@property (nonatomic) long long identifier;

+ (bool)supportsSecureCoding;

- (long long)camp;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (double)holdoutAllocation;
- (long long)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCamp:(long long)arg1;
- (void)setHoldoutAllocation:(double)arg1;
- (void)setIdentifier:(long long)arg1;
- (bool)updateCampIfNeeded;
- (bool)updateWithExperimentDictionary:(id)arg1;

@end
