
@interface Ace3SoCRestoreInfoFirmwareCopierOS : Ace3SoCRestoreInfoHelperOS {
    NSURL * _destBundlePathURL;
    NSURL * _firmwareBundleURL;
    NSData * _firmwareInBundleDataDict;
    NSData * _firmwareOverrideData;
    NSString * _firmwarePathSuffix;
}

- (void).cxx_destruct;
- (bool)copyFirmwareToDestinationBundleWithError:(id*)arg1;
- (id)firmwareKeyFromBuildIdentityDict:(id)arg1 deviceInfo:(id)arg2;
- (id)initWithOptions:(id)arg1 logFunction:(int (*)arg2 logContext:(void*)arg3;
- (bool)parseOptions:(id)arg1;
- (id)readFirmwareFileDataWithError:(id*)arg1;

@end
