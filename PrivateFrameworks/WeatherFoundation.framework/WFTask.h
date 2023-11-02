
@interface WFTask : NSObject {
    WFTaskIdentifier * _identifier;
    NSProgress * _progress;
    bool  _requiresResponse;
}

@property (nonatomic, readonly) WFTaskIdentifier *identifier;
@property (nonatomic, readonly) bool isCancelled;
@property (nonatomic, retain) NSProgress *progress;
@property (nonatomic, readonly) bool requiresResponse;

+ (id)sharedServiceConnection;

- (void).cxx_destruct;
- (void)cancel;
- (void)cleanup;
- (void)executeSynchronously;
- (void)handleCancellation;
- (void)handleError:(id)arg1 forResponseIdentifier:(id)arg2;
- (void)handleResponse:(id)arg1;
- (id)identifier;
- (id)init;
- (id)initWithResponseRequired:(bool)arg1;
- (bool)isCancelled;
- (id)progress;
- (bool)requiresResponse;
- (void)setProgress:(id)arg1;
- (void)start;
- (void)startWithService:(id)arg1;

@end
