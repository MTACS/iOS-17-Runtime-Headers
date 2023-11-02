
@interface HMIAnalysisService : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;

- (bool)cancelRequest:(int)arg1;
- (id)expectedClasses;
- (id)init;
- (int)requestAnalysisForAssetData:(id)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;
- (int)requestAnalysisForPixelBuffer:(struct __CVBuffer { }*)arg1 withProperties:(id)arg2 andCompletionHandler:(id /* block */)arg3;

@end
