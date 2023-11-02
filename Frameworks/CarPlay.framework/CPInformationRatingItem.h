
@interface CPInformationRatingItem : CPInformationItem <NSSecureCoding> {
    NSNumber * _maximumRating;
    NSNumber * _rating;
}

@property (nonatomic, readonly) NSNumber *maximumRating;
@property (nonatomic, readonly) NSNumber *rating;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_santizeRatingItem;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRating:(id)arg1 maximumRating:(id)arg2 title:(id)arg3 detail:(id)arg4;
- (id)initWithTitle:(id)arg1 detail:(id)arg2;
- (id)maximumRating;
- (id)rating;

@end
