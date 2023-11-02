
@interface POWSTrustBaseRequestType : NSObject <POXSDefinitionProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)definition;

- (id)description;

@end
