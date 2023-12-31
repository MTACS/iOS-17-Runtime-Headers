
@interface UAPBIRIdentityConverter : NSObject <UAPBIRConverter>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)registerConverter;

- (id)convertIRDataToPlatform:(id)arg1;
- (id)convertPlatformDataToIR:(id)arg1;
- (id)typeString;

@end
