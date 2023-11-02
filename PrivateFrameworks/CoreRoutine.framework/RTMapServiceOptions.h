
@interface RTMapServiceOptions : NSObject <NSSecureCoding> {
    NSString * _analyticsIdentifier;
    NSString * _clientIdentifier;
    bool  _useBackgroundTraits;
}

@property (nonatomic, readonly) NSString *analyticsIdentifier;
@property (nonatomic, readonly) NSString *clientIdentifier;
@property (nonatomic, readonly) bool useBackgroundTraits;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)analyticsIdentifier;
- (id)clientIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithUseBackgroundTraits:(bool)arg1 analyticsIdentifier:(id)arg2;
- (id)initWithUseBackgroundTraits:(bool)arg1 analyticsIdentifier:(id)arg2 clientIdentifier:(id)arg3;
- (bool)useBackgroundTraits;

@end
