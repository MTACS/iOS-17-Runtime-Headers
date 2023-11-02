
@interface _HDUserDomainConceptObserverRecord : NSObject {
    long long  _changeType;
    HKUserDomainConcept * _userDomainConcept;
}

@property (nonatomic, readonly) long long changeType;
@property (nonatomic, readonly) HKUserDomainConcept *userDomainConcept;

- (void).cxx_destruct;
- (long long)changeType;
- (id)init;
- (id)initWithUserDomainConcept:(id)arg1 modificationType:(long long)arg2;
- (id)userDomainConcept;

@end
