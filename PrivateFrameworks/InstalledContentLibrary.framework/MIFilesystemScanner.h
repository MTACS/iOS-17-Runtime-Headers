
@interface MIFilesystemScanner : NSObject {
    <MIFilesystemScannerDelegate> * _delegate;
    unsigned long long  _options;
    NSString * _personaUniqueString;
}

@property (nonatomic) <MIFilesystemScannerDelegate> *delegate;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, readonly) NSString *personaUniqueString;

- (void).cxx_destruct;
- (bool)_scanAppsDirectory:(id)arg1 withError:(id*)arg2;
- (bool)_scanBundleContainersWithClass:(unsigned long long)arg1 withError:(id*)arg2 ignoredErrorOccurredOnOneOrMoreItems:(bool*)arg3;
- (bool)_scanExtensionKitDirectory:(id)arg1 withError:(id*)arg2;
- (bool)_scanExtensionKitLocationsWithError:(id*)arg1;
- (bool)_scanFrameworkDirectory:(id)arg1 withError:(id*)arg2;
- (bool)_scanFrameworksLocationsWithError:(id*)arg1;
- (id)delegate;
- (id)extensionKitExtensionsDirectories;
- (id)init;
- (id)initWithScanOptions:(unsigned long long)arg1;
- (id)initWithScanOptions:(unsigned long long)arg1 personaUniqueString:(id)arg2;
- (unsigned long long)options;
- (bool)performScanWithError:(id*)arg1;
- (id)personaUniqueString;
- (void)setDelegate:(id)arg1;

@end
