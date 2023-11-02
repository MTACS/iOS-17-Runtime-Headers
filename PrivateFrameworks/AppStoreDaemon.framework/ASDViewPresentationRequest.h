
@interface ASDViewPresentationRequest : NSObject <NSSecureCoding> {
    long long  _viewIdentifier;
}

@property (nonatomic, readonly) long long viewIdentifier;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithViewIdentifier:(long long)arg1;
- (long long)viewIdentifier;

@end
