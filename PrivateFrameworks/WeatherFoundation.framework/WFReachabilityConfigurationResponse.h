
@interface WFReachabilityConfigurationResponse : WFResponse <NSSecureCoding> {
    NSURL * _reachabilityHostURL;
}

@property (nonatomic, readonly) NWPathEvaluator *pathEvaluator;
@property (nonatomic, copy) NSURL *reachabilityHostURL;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)pathEvaluator;
- (id)reachabilityHostURL;
- (void)setReachabilityHostURL:(id)arg1;

@end
