
@interface VNANFDDetectorCompoundRequestConfigurationGroups : NSObject {
    NSMutableDictionary * _regionOfInterestConfigurations;
}

+ (id)createCompoundConfigurationHashKeyForRequest:(id)arg1 compoundRequestRevision:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)allConfigurations;
- (id)configurationForRequest:(id)arg1;
- (unsigned long long)count;
- (id)init;

@end
