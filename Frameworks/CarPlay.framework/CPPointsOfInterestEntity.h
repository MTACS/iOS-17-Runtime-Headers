
@interface CPPointsOfInterestEntity : CPEntity <CPPointsOfInterestProviding, NSSecureCoding> {
    NSArray * _pointsOfInterest;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *pointsOfInterest;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1 pointsOfInterest:(id)arg2;
- (id)objectForIdentifier:(id)arg1;
- (id)pointsOfInterest;
- (void)setPointsOfInterest:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
