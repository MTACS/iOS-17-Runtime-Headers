
@interface EMMessageRepositoryRemoteContentURLInfo : NSObject <NSSecureCoding> {
    NSDate * _lastRequested;
    NSDate * _lastSeen;
    unsigned long long  _requestCount;
    NSURL * _url;
}

@property (nonatomic, readonly) NSDate *lastRequested;
@property (nonatomic, readonly) NSDate *lastSeen;
@property (nonatomic, readonly) unsigned long long requestCount;
@property (nonatomic, readonly) NSURL *url;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_commonInitWithURL:(id)arg1 requestCount:(unsigned long long)arg2 lastSeen:(id)arg3 lastRequested:(id)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 requestCount:(unsigned long long)arg2 lastSeen:(id)arg3 lastRequested:(id)arg4;
- (id)lastRequested;
- (id)lastSeen;
- (unsigned long long)requestCount;
- (id)url;

@end
