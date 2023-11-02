
@interface NFLPEMConfigSession : NFSession

- (bool)configureHardwareForLPEMWithError:(id*)arg1;
- (bool)disableLPEMFeature:(unsigned long long)arg1 error:(id*)arg2;
- (bool)enableLPEMFeature:(unsigned long long)arg1 error:(id*)arg2;
- (id)getLPEMBluetoothLogWithError:(id*)arg1;
- (unsigned long long)getLPEMFeaturesWithError:(id*)arg1;

@end
