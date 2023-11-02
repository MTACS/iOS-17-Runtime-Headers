
@interface VNFaceAnalyzerCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary * _generalConfigurations;
    NSMutableDictionary * _observationGroupConfigurations;
}

- (void).cxx_destruct;
- (id)allConfigurations;
- (id)configurationForRequest:(id)arg1 withObservationGroup:(id)arg2 compoundRequestRevision:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)init;

@end
