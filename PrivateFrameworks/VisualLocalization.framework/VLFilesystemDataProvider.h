
@interface VLFilesystemDataProvider : NSObject <VLLocalizationDataProvider> {
    NSURL * _baseDirectory;
    <VLLocalizationDataProviderDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VLLocalizationDataProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (void)determineAvailabilityForCoordinate:(const struct { double x1; double x2; }*)arg1 horizontalAccuracy:(double)arg2 purpose:(long long)arg3 callbackQueue:(id)arg4 callback:(id /* block */)arg5;
- (id)fileURLForKey:(const struct { int x1; int x2; int x3; int x4; }*)arg1 error:(id*)arg2;
- (id)initWithBaseDirectory:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
