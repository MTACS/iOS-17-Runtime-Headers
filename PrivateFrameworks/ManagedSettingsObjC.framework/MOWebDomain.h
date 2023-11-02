
@interface MOWebDomain : NSObject <MOPersistable> {
    NSString * _domain;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSString *domain;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) Class superclass;

+ (bool)compareDomain:(id)arg1 withDomainPattern:(id)arg2 outExactMatch:(bool*)arg3;
+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)domain;
- (unsigned long long)hash;
- (id)initWithDomain:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)persistableValue;

@end
