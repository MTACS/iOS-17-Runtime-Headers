
@interface ISURLResolverOperation : ISOperation {
    NSURL * _URL;
    struct __CFHost { } * _host;
    NSURL * _url;
}

@property (nonatomic, copy) NSURL *URL;
@property (readonly) NSArray *resolvedAddressStrings;
@property (readonly) NSArray *resolvedAddresses;

- (void).cxx_destruct;
- (id)URL;
- (void)_resolutionCompletedWithError:(id)arg1;
- (void)_runLookupForHostname:(id)arg1;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)resolvedAddressStrings;
- (id)resolvedAddresses;
- (void)run;
- (void)setURL:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)url;

@end
