
@interface TRSetupConfigurationResponse : TRResponseMessage {
    bool  _needsNetwork;
    NSSet * _unauthenticatedAccountServices;
    bool  _useAIDA;
}

@property (nonatomic) bool needsNetwork;
@property (nonatomic, copy) NSSet *unauthenticatedAccountServices;
@property (nonatomic) bool useAIDA;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_stringFromAccountServices:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)needsNetwork;
- (void)setNeedsNetwork:(bool)arg1;
- (void)setUnauthenticatedAccountServices:(id)arg1;
- (void)setUseAIDA:(bool)arg1;
- (id)unauthenticatedAccountServices;
- (bool)useAIDA;

@end
