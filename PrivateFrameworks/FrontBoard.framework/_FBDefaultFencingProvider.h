
@interface _FBDefaultFencingProvider : NSObject <FBFencingProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void)synchronizeDrawingWithFence:(id)arg1;

@end
