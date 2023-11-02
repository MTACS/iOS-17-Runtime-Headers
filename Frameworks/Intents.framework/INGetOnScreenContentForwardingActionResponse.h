
@interface INGetOnScreenContentForwardingActionResponse : INIntentForwardingActionResponse {
    WFOnScreenContentNode * _node;
}

@property (nonatomic, readonly) WFOnScreenContentNode *node;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNode:(id)arg1 error:(id)arg2;
- (id)node;

@end
