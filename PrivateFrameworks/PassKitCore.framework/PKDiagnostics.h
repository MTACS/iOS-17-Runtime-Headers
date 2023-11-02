
@interface PKDiagnostics : NSObject

+ (id)_allPasses;
+ (void)_createDiagnosticJsonWithDictionary:(id)arg1 hasLibrary:(bool)arg2 completion:(id /* block */)arg3;
+ (id)_metadataForCardAtURL:(id)arg1;
+ (id)_secureElementData;
+ (void)generateDiagnosticsPackageWithPassLibrary:(bool)arg1 completion:(id /* block */)arg2;
+ (id)generateUbiquityDiagnosticsFile:(bool)arg1;
+ (void)generateZippedDiagnosticsPackageWithPassLibrary:(bool)arg1 completion:(id /* block */)arg2;
+ (void)saveTransitState:(id)arg1 forPaymentApplication:(id)arg2;

@end
