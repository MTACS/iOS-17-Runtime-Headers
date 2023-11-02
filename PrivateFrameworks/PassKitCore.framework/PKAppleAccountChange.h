
@interface PKAppleAccountChange : NSObject <NSSecureCoding> {
    PKAppleAccountState * _currentState;
    long long  _event;
    PKAppleAccountState * _previousState;
    long long  _type;
}

@property (nonatomic, readonly) PKAppleAccountState *currentState;
@property (nonatomic, readonly) long long event;
@property (nonatomic, readonly) PKAppleAccountState *previousState;
@property (nonatomic, readonly) long long type;

+ (long long)changeTypeToAccount:(id)arg1 fromAccount:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)currentState;
- (id)description;
- (bool)didAccountManagedStateChange;
- (bool)didAccountOrderChange;
- (bool)didEnablementOfRelevantDataclassesChange;
- (bool)didEnablementOfUbiquityDataclassChange;
- (bool)didEnablementOfWalletDataclassChange;
- (void)encodeWithCoder:(id)arg1;
- (long long)event;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvent:(long long)arg1 currentAccount:(id)arg2 previousAccount:(id)arg3;
- (id)previousState;
- (bool)shouldBeNotedByPassLibrary;
- (long long)type;

@end
