
@protocol FAHealthKitSoftLinkingProtocol

@required

- (void)fetchLastModifiedDate:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 8: FAFamilyCircle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDate *, NSError *, void*
- (void)fetchMedicalIDData:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 9: FAFamilyCircle *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, _HKMedicalIDData *, unsigned long long, NSError *, void*
- (id)initWithFamilyCircle:(FAFamilyCircle *)arg1;
- (void)presentMedicalIDViewController:(UIViewController *)arg1 withFamily:(FAFamilyCircle *)arg2 isEmergencyContactSetup:(bool)arg3;

@end
