
@interface MADVIVisualSearchResult : MADResult {
    NSArray * _resultItems;
    NSData * _userFeedbackPayload;
}

@property (nonatomic, readonly) NSArray *resultItems;
@property (nonatomic, readonly) NSData *userFeedbackPayload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResultItems:(id)arg1 andUserFeedbackPayload:(id)arg2;
- (id)resultItems;
- (id)userFeedbackPayload;

@end
