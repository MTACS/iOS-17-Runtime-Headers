
@interface MCMResultWithURLBase : MCMResultBase <MCMResultWithURL> {
    bool  _existed;
    NSString * _path;
    const char * _sandboxToken;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) bool existed;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *path;
@property (nonatomic, readonly) const char *sandboxToken;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (void)dealloc;
- (bool)encodeResultOntoReply:(id)arg1;
- (bool)existed;
- (id)initWithPath:(id)arg1 existed:(bool)arg2 sandboxToken:(const char *)arg3;
- (id)initWithURL:(id)arg1 existed:(bool)arg2 sandboxToken:(const char *)arg3;
- (id)path;
- (const char *)sandboxToken;
- (id)url;

@end
