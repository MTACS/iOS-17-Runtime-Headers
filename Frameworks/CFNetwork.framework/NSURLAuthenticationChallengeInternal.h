
@interface NSURLAuthenticationChallengeInternal : NSObject {
    NSError * error;
    NSURLResponse * failureResponse;
    long long  preferredProtSpaceIndex;
    long long  previousFailureCount;
    NSURLCredential * proposedCredential;
    NSArray * protectionSpacesForChallenge;
    <NSURLAuthenticationChallengeSender> * sender;
    NSURLProtectionSpace * space;
}

- (void)dealloc;

@end
