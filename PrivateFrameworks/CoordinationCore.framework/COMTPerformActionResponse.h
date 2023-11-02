
@interface COMTPerformActionResponse : COMessageChannelResponse {
    NSDictionary * _results;
}

@property (nonatomic, readonly, copy) NSDictionary *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1;
- (id)results;

@end
