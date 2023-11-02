
@interface AppleTypeCRetimerFirmwareCopierOS : AppleTypeCRetimerRestoreInfoHelperOS {
    NSURL * _destBundlePathURL;
    NSData * _firmwareInBundleDataDict;
    NSData * _firmwareOverrideData;
    NSURL * _ftabBundleURL;
    NSString * _ftabPathSuffix;
}

- (void).cxx_destruct;
- (bool)copyFirmwareToDestinationBundleWithError:(id*)arg1;
- (bool)createDestinationBundleFirmwareDirectoryFor:(id)arg1 error:(id*)arg2;
- (id)description;
- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (bool)parseOptions:(id)arg1;
- (id)readFirmwareFileDataWithError:(id*)arg1;
- (id)rtKitKeyFromBuildIdentityDict:(id)arg1;

@end
