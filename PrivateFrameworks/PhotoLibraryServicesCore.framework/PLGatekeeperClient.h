
@interface PLGatekeeperClient : NSObject {
    PLAssetsdClient * _assetsdClient;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)getLibrarySizes:(id /* block */)arg1;
- (void)getLibrarySizesFromDB:(bool)arg1 handler:(id /* block */)arg2;

@end
