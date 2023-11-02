
@interface PocketAPIOperation : NSOperation <NSCopying, NSURLConnectionDelegate, PocketAPIDelegate> {
    PocketAPI * API;
    NSString * APIMethod;
    int  HTTPMethod;
    NSDictionary * arguments;
    bool  attemptedRelogin;
    NSString * baseURLPath;
    NSURLConnection * connection;
    NSMutableData * data;
    <PocketAPIDelegate> * delegate;
    int  domain;
    NSError * error;
    bool  finishedLoading;
    NSHTTPURLResponse * response;
}

@property (nonatomic, retain) PocketAPI *API;
@property (nonatomic, retain) NSString *APIMethod;
@property (nonatomic) int HTTPMethod;
@property (nonatomic, retain) NSDictionary *arguments;
@property (nonatomic, readonly, retain) NSString *baseURLPath;
@property (nonatomic, readonly, retain) NSURLConnection *connection;
@property (nonatomic, readonly, retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, retain) <PocketAPIDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) int domain;
@property (nonatomic, readonly, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) NSHTTPURLResponse *response;
@property (readonly) Class superclass;

+ (id)decodeForURL:(id)arg1;
+ (id)encodeForURL:(id)arg1;
+ (id)errorFromXError:(id)arg1 withErrorCode:(unsigned long long)arg2 HTTPStatusCode:(unsigned long long)arg3;

- (id)API;
- (id)APIMethod;
- (int)HTTPMethod;
- (id)arguments;
- (id)baseURLPath;
- (id)connection;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connectionFinishedWithError:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (int)domain;
- (id)error;
- (id)init;
- (bool)isConcurrent;
- (bool)isExecuting;
- (bool)isFinished;
- (id)pkt_URLRequest;
- (void)pkt_connectionFinishedLoading;
- (id)pkt_requestArguments;
- (void)pocketAPI:(id)arg1 hadLoginError:(id)arg2;
- (void)pocketAPILoggedIn:(id)arg1;
- (id)response;
- (id)responseDictionary;
- (void)setAPI:(id)arg1;
- (void)setAPIMethod:(id)arg1;
- (void)setArguments:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomain:(int)arg1;
- (void)setHTTPMethod:(int)arg1;
- (void)start;

@end
