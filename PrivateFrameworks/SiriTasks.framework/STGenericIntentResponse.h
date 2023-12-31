
@interface STGenericIntentResponse : AFSiriResponse {
    long long  _responseCode;
}

@property (nonatomic) long long responseCode;

+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)responseCode;
- (void)setResponseCode:(long long)arg1;

@end
