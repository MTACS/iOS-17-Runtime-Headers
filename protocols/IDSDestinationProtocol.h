
@protocol IDSDestinationProtocol <NSSecureCoding, NSCopying, NSObject>

@required

- (NSSet *)destinationURIs;

@optional

- (NSDictionary *)destinationLightweightStatus;

@end
