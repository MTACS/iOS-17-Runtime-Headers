
@interface CRFDRUtils : NSObject

+ (id)_getManifestForDataClass:(id)arg1;
+ (id)getData:(id)arg1 instance:(id)arg2;
+ (id)getDataPayload:(id)arg1 instance:(id)arg2;
+ (id)getDiagnosticReport;
+ (id)getLocalSealingManifest;
+ (id)getStringFromCert:(struct { char *x1; char *x2; })arg1 WithTag:(unsigned long long)arg2 AndOID:(id)arg3;
+ (bool)isDataClassSupported:(id)arg1;
+ (bool)isDcSignedCombinedDataClass:(id)arg1 error:(id*)arg2;
+ (bool)isDcSignedDataClass:(id)arg1 error:(id*)arg2;
+ (bool)isDcSignedSealingManifest:(id*)arg1;
+ (id)isServicePartWithError:(id*)arg1;

@end
