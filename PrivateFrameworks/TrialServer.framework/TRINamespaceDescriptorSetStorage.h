
@interface TRINamespaceDescriptorSetStorage : NSObject {
    <TRIPaths> * _paths;
}

- (void).cxx_destruct;
- (id)_collectNamespaceDescriptorSets;
- (bool)hasNamespaceDescriptorsForTreatmentWithId:(id)arg1 path:(id*)arg2;
- (id)initWithPaths:(id)arg1;
- (bool)overwriteNamespaceDescriptors:(id)arg1 forTreatmentId:(id)arg2;
- (id)parentDirForNamespaceDescriptorSets;
- (id)pathForNamespaceDescriptorsWithTreatmentId:(id)arg1;
- (bool)removeUnreferencedNamespaceDescriptorSetsWithServerContext:(id)arg1 removedCount:(unsigned int*)arg2;

@end
