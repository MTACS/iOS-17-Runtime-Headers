
@interface PocketAPILogin : NSObject <NSSecureCoding, PocketAPIDelegate> {
    PocketAPI * API;
    NSString * accessToken;
    <PocketAPIDelegate> * delegate;
    bool  didFinish;
    bool  didStart;
    NSOperationQueue * operationQueue;
    NSString * requestToken;
    bool  reverseAuth;
    NSString * uuid;
}

@property (nonatomic, readonly, retain) PocketAPI *API;
@property (nonatomic, readonly, retain) NSString *accessToken;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSString *requestToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) NSString *uuid;

+ (bool)supportsSecureCoding;

- (id)API;
- (void)_setRequestToken:(id)arg1;
- (void)_setReverseAuth:(bool)arg1;
- (id)accessToken;
- (void)convertRequestTokenToAccessToken;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)fetchRequestToken;
- (id)init;
- (id)initWithAPI:(id)arg1 delegate:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (void)loginDidFinish:(bool)arg1;
- (void)loginDidStart;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPI:(id)arg1 receivedRequestToken:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (id)redirectURL;
- (id)requestToken;
- (id)uuid;

@end
