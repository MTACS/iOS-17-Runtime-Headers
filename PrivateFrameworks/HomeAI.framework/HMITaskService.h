
@interface HMITaskService : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allowedClasses;
+ (id)logCategory;
+ (id)taskService;
+ (id)taskServiceClient;

- (bool)cancelTask:(int)arg1;
- (id)initPrivate;
- (int)submitTask:(id)arg1 progressHandler:(id /* block */)arg2 completionHander:(id /* block */)arg3;
- (int)submitTaskWithOptions:(id)arg1 completionHandler:(id /* block */)arg2;
- (int)submitTaskWithOptions:(id)arg1 progressHandler:(id /* block */)arg2 completionHandler:(id /* block */)arg3;

@end
