
@interface PPTripEvent : PPScoredEvent {
    NSArray * _tripParts;
}

@property (nonatomic, readonly) NSArray *tripParts;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)destinations;
- (id)destinationsBasedTitle;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartDate:(id)arg1 endDate:(id)arg2 tripParts:(id)arg3;
- (id)tripParts;

@end
