
@interface MADVIVisualSearchGatingResult : MADResult {
    NSData * _payload;
    NSArray * _resultItems;
}

@property (nonatomic, readonly) bool passedGating;
@property (nonatomic, readonly) NSData *payload;
@property (nonatomic, readonly) NSArray *resultItems;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultItems:(id)arg1 andPayload:(id)arg2;
- (bool)passedGating;
- (id)payload;
- (id)resultItems;

@end
