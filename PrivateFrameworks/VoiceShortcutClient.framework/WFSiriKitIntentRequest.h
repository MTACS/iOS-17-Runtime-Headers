
@interface WFSiriKitIntentRequest : WFSiriActionRequest {
    INIntent * _intent;
}

@property (nonatomic, readonly) INIntent *intent;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)intent;

@end
