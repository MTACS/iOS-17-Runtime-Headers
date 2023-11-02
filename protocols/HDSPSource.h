
@protocol HDSPSource <NSObject>

@required

- (NSString *)sourceIdentifier;

@optional

- (bool)dontNotify;
- (bool)dontSync;

@end
