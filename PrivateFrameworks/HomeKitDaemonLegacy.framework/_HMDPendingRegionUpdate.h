
@interface _HMDPendingRegionUpdate : HMFObject <HMFLogging> {
    long long  _state;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long state;
@property (readonly) Class superclass;

+ (id)logCategory;

- (id)attributeDescriptions;
- (void)setState:(long long)arg1;
- (long long)state;

@end
