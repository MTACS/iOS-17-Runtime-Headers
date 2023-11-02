
@interface CRKFetchNumberOfDaysBeforeAutomaticRemovalResultObject : CATTaskResultObject {
    long long  _numberOfDaysBeforeAutomaticRemoval;
}

@property (nonatomic) long long numberOfDaysBeforeAutomaticRemoval;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNumberOfDaysBeforeAutomaticRemoval:(long long)arg1;
- (long long)numberOfDaysBeforeAutomaticRemoval;
- (void)setNumberOfDaysBeforeAutomaticRemoval:(long long)arg1;

@end
