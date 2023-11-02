
@protocol CATSharingFailureEvent <NSObject>

@required

- (long long)failureType;
- (NSError *)underlyingError;

@end
