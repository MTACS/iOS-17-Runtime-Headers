
@interface WBSSiteMetadataFetchOperation : NSOperation {
    WBSSiteMetadataRequest * _request;
    long long  _status;
}

@property (nonatomic, readonly) WBSSiteMetadataRequest *request;
@property (getter=_status, setter=_setStatus:) long long status;

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;

- (void).cxx_destruct;
- (void)_setStatus:(long long)arg1;
- (long long)_status;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (bool)isExecuting;
- (bool)isFinished;
- (id)request;
- (void)start;

@end
