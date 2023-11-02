
@protocol MTSource <NSObject>

@required

- (NSString *)sourceIdentifier;

@optional

- (bool)donatesIntent;
- (bool)dontNotify;
- (bool)isFromOtherDevice;

@end
