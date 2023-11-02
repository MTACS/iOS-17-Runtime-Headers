
@interface PKDefaults : NSObject

+ (id)absoluteSpoolDirectory;
+ (void)addLastUsedPrinter:(id)arg1 duplexMode:(id)arg2 lastUsedSize:(struct CGSize { double x1; double x2; })arg3 forPhoto:(bool)arg4;
+ (bool)airPrintBeaconDiscoveryAllowed;
+ (bool)ippsIsRequired;
+ (id)lastUsedPrinters;
+ (void)lastUsedPrintersCompletionHandler:(id /* block */)arg1;
+ (id)lastUsedPrintersForPhoto:(bool)arg1;
+ (void)lastUsedPrintersForPhoto:(bool)arg1 completionHandler:(id /* block */)arg2;
+ (bool)mcProfilePrintersOnlyAllowed;
+ (id)requiredPDL;
+ (bool)urfIsOptional;
+ (bool)uriMatchesMCProfileAdded:(id)arg1;

@end
