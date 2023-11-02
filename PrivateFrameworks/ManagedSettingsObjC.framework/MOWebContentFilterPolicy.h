
@interface MOWebContentFilterPolicy : NSObject <MOPersistable> {
    NSSet * _autoAllow;
    NSSet * _neverAllow;
    NSSet * _onlyAllow;
    long long  _policy;
}

@property (readonly) NSSet *autoAllow;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSSet *neverAllow;
@property (readonly) NSSet *onlyAllow;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) long long policy;
@property (readonly) Class superclass;

+ (id)allPolicyWithExceptions:(id)arg1;
+ (id)autoPolicyWithDomains:(id)arg1 exceptions:(id)arg2;
+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;
+ (id)nonePolicy;
+ (id)specificPolicyWithDomains:(id)arg1;

- (void).cxx_destruct;
- (id)autoAllow;
- (id)initWithAutoAllow:(id)arg1 neverAllow:(id)arg2 onlyAllow:(id)arg3;
- (id)neverAllow;
- (id)onlyAllow;
- (id)persistableValue;
- (long long)policy;

@end
