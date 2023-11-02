
@interface _AFExperimentGroupMutation : NSObject <AFExperimentGroupMutating> {
    unsigned long long  _allocation;
    AFExperimentGroup * _base;
    NSString * _identifier;
    struct _mutationFlags { 
        unsigned int isDirty : 1; 
        unsigned int hasIdentifier : 1; 
        unsigned int hasAllocation : 1; 
        unsigned int hasProperties : 1; 
    }  _mutationFlags;
    NSDictionary * _properties;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)getAllocation;
- (id)getIdentifier;
- (id)getProperties;
- (id)initWithBase:(id)arg1;
- (bool)isDirty;
- (void)setAllocation:(unsigned long long)arg1;
- (void)setIdentifier:(id)arg1;
- (void)setProperties:(id)arg1;

@end
