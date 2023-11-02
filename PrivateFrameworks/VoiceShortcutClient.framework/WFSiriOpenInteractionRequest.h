
@interface WFSiriOpenInteractionRequest : WFSiriActionRequest {
    INInteraction * _interaction;
}

@property (nonatomic, readonly) INInteraction *interaction;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInteraction:(id)arg1;
- (id)interaction;

@end
