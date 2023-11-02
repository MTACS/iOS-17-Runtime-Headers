
@interface DMFRefreshStatusResultObject : CATTaskResultObject {
    NSNumber * _numberOfUpdates;
}

@property (nonatomic, copy) NSNumber *numberOfUpdates;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)numberOfUpdates;
- (void)setNumberOfUpdates:(id)arg1;

@end
