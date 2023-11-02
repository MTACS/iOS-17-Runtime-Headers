
@interface MOUserSafetyScanningPolicy : NSObject <MOPersistable> {
    NSDictionary * _allApplications;
    NSDictionary * _allServices;
    NSString * _interventionType;
    long long  _policy;
}

@property (readonly) NSDictionary *allApplications;
@property (readonly) NSDictionary *allServices;
@property (readonly) NSSet *applications;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *interventionType;
@property (nonatomic, readonly) id persistableValue;
@property (readonly) long long policy;
@property (readonly) NSSet *services;
@property (readonly) Class superclass;

+ (id)communicationSafetyWithInterventionType:(id)arg1;
+ (id)initializeWithPersistableValue:(id)arg1;
+ (bool)isValidPersistableRepresentation:(id)arg1;
+ (id)nonePolicy;
+ (id)nudityDetectionPolicyWithAllServices:(id)arg1 allApplications:(id)arg2;
+ (id)nudityDetectionPolicyWithServices:(id)arg1 applications:(id)arg2;

- (void).cxx_destruct;
- (id)allApplications;
- (id)allServices;
- (id)applications;
- (id)initWithAllServices:(id)arg1 allApplications:(id)arg2 interventionType:(id)arg3;
- (id)interventionType;
- (id)persistableValue;
- (long long)policy;
- (id)services;

@end
