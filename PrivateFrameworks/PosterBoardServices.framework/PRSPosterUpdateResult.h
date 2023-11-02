
@interface PRSPosterUpdateResult : NSObject <NSSecureCoding> {
    NSError * _error;
    id  _initialValue;
    PRSPosterUpdate * _update;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly, copy) id initialValue;
@property (nonatomic, readonly, copy) PRSPosterUpdate *update;
@property (nonatomic, readonly, copy) id updatedValue;

+ (id)failedUpdateResultForUpdate:(id)arg1 error:(id)arg2;
+ (id)successfulUpdateResultForUpdate:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithUpdate:(id)arg1;
- (id)initialValue;
- (id)requestedValue;
- (id)update;

@end
