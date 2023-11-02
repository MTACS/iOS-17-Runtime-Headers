
@interface EMDaemonInterfaceRequest : NSObject <EFSignpostable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long signpostID;
@property (readonly) Class superclass;

+ (id)signpostLog;
+ (id)systemScopeSignpostLog;
+ (unsigned long long)uniqueRequestID;

- (unsigned long long)signpostID;

@end
