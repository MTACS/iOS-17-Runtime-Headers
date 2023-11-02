
@interface CRFDRDisplay1DeviceHandler : CRFDRBaseDeviceHandler {
    NSString * KBBMLBSerialNumber;
    NSDictionary * _KBBTransferProperties;
}

@property (nonatomic, retain) NSString *KBBMLBSerialNumber;
@property (nonatomic, retain) NSDictionary *KBBTransferProperties;

+ (id)getDeviceHandlerForProductType:(int)arg1;
+ (bool)isDisplay1ProductType:(int)arg1;

- (void).cxx_destruct;
- (id)KBBMLBSerialNumber;
- (id)KBBTransferProperties;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)getClaimDataClassesAndInstancesWithPartSPC:(id)arg1;
- (id)getExcludedPropertiesForFactoryReset;
- (bool)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 propertiesFromParam:(id)arg3 makeClasses:(id*)arg4 makeInstances:(id*)arg5 makePropertiesDict:(id*)arg6 fdrError:(id*)arg7;
- (id)getMakeDataClassesAndInstancesWithPartSPC:(id)arg1 fdrRemote:(struct __AMFDR { }*)arg2 propertiesFromParam:(id)arg3 makePropertiesDict:(id*)arg4 fdrError:(id*)arg5;
- (long long)mlbRepairChecks;
- (long long)performPostSealingStage:(id)arg1;
- (void)setKBBMLBSerialNumber:(id)arg1;
- (void)setKBBTransferProperties:(id)arg1;
- (bool)syncSysConfig:(id)arg1 key:(unsigned int)arg2 inBuffer:(id)arg3;
- (bool)validateAndSetSerialNumbersUsingPartSPC:(id)arg1 KGBSerialNumber:(id)arg2 KBBSerialNumber:(id)arg3 withError:(id*)arg4;

@end
