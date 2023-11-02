
@interface SUCorePolicyPreflightPersonalize : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _additionalOptions;
    NSDictionary * _basePreflightOptions;
    bool  _performPhase;
}

@property (nonatomic, retain) NSDictionary *additionalOptions;
@property (nonatomic, retain) NSDictionary *basePreflightOptions;
@property (nonatomic) bool performPhase;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)additionalOptions;
- (id)basePreflightOptions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)performPhase;
- (void)setAdditionalOptions:(id)arg1;
- (void)setBasePreflightOptions:(id)arg1;
- (void)setPerformPhase:(bool)arg1;
- (id)summary;

@end
