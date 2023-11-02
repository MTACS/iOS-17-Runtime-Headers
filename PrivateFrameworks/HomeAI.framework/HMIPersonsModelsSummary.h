
@interface HMIPersonsModelsSummary : HMFObject {
    unsigned long long  _externalToExternalEquivalencies;
    unsigned long long  _homeToExternalEquivalencies;
    NSSet * _modelSummaries;
}

@property (readonly) unsigned long long externalToExternalEquivalencies;
@property (readonly) unsigned long long homeToExternalEquivalencies;
@property (readonly) NSSet *modelSummaries;

- (void).cxx_destruct;
- (unsigned long long)externalToExternalEquivalencies;
- (unsigned long long)homeToExternalEquivalencies;
- (id)initWithModelSummaries:(id)arg1 homeToExternalEquivalencies:(unsigned long long)arg2 externalToExternalEquivalencies:(unsigned long long)arg3;
- (id)modelSummaries;

@end
