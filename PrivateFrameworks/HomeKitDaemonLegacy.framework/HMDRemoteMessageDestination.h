
@interface HMDRemoteMessageDestination : HMFMessageDestination <HMDRemoteAddressable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)allMessageDestinations;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (id)remoteDestinationString;

@end
