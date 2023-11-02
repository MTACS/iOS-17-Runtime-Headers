
@interface IDSDestination : NSObject <IDSDestinationProtocol, NSCopying>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isDevice, nonatomic, readonly) bool device;
@property (getter=isEmpty, nonatomic, readonly) bool empty;
@property (getter=isGuest, nonatomic, readonly) bool guest;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation

+ (id)classesForStrictUnarchiving;
+ (id)defaultPairedDeviceDestination;
+ (id)destinationWithAlias:(id)arg1 pushToken:(id)arg2;
+ (id)destinationWithDestinations:(id)arg1;
+ (id)destinationWithDeviceURI:(id)arg1;
+ (id)destinationWithGroup:(id)arg1;
+ (id)destinationWithRapportPublicIdentifierURI:(id)arg1;
+ (id)destinationWithString:(id)arg1;
+ (id)destinationWithStringURI:(id)arg1 isLightWeight:(bool)arg2;
+ (id)destinationWithStrings:(id)arg1;
+ (id)destinationWithURI:(id)arg1;
+ (id)sentinelSelfAliasDestination;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)destinationURIs;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isDevice;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDestination:(id)arg1;
- (bool)isGuest;
- (id)normalizedURIStrings;
- (id)normalizedURIs;

// Image: /System/Library/PrivateFrameworks/IDS.framework/IDS

+ (id)destinationWithDevice:(id)arg1;
+ (id)destinationWithRapportPublicIdentifier:(id)arg1;

@end
