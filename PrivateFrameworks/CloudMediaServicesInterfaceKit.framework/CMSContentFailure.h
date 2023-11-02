
@interface CMSContentFailure : NSObject <CMSCoding> {
    NSURL * _URL;
    NSError * _error;
}

@property (nonatomic, retain) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)URL;
- (id)cmsCoded;
- (id)error;
- (id)initWithError:(id)arg1;
- (id)initWithError:(id)arg1 url:(id)arg2;
- (id)initWithServiceError:(id)arg1 url:(id)arg2;
- (void)setError:(id)arg1;
- (void)setURL:(id)arg1;

@end
