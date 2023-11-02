
@interface WFMultipleValueParameterStateEntry : NSObject {
    NSUUID * _identity;
    <WFParameterState> * _parameterState;
}

@property (nonatomic, readonly) NSUUID *identity;
@property (nonatomic, readonly) <WFParameterState> *parameterState;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)identity;
- (id)initWithIdentity:(id)arg1 parameterState:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parameterState;

@end
