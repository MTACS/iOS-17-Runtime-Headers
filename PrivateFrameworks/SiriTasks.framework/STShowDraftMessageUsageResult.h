
@interface STShowDraftMessageUsageResult : AFSiriTaskUsageResult {
    long long  _resultCode;
}

@property (nonatomic) long long resultCode;

+ (bool)supportsSecureCoding;

- (id)_resultDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)resultCode;
- (void)setResultCode:(long long)arg1;

@end
