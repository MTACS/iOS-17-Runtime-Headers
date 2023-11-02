
@interface HMDNetworkActivityWrapperFactory : NSObject <HMDNetworkActivityWrapperFactory>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (id)networkActivityWrapperWithLabel:(unsigned long long)arg1;

@end
