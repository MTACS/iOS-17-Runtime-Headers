
@interface EKNullFetchRequestToken : NSObject <EKFetchRequestToken>

+ (id)sharedToken;

- (void)cancel;

@end
