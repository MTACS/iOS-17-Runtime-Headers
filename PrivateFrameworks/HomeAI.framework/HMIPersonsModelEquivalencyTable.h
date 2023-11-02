
@interface HMIPersonsModelEquivalencyTable : HMFObject <HMFLogging> {
    NSDictionary * _personToEquivalencyCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSDictionary *personToEquivalencyCell;
@property (readonly) Class superclass;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)equivalencyCellForPerson:(id)arg1;
- (bool)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2;
- (bool)facesAreSamePersonFromSet:(id)arg1 andSet:(id)arg2 distanceThreshold:(double)arg3 percentMatchingThreshold:(double)arg4;
- (id)initWith;
- (id)initWithPersonsModels:(id)arg1 userDefinedPersonLinks:(id)arg2 error:(id*)arg3;
- (id)personToEquivalencyCell;

@end
