
@interface SXWebContentLoadEvent : SXAnalyticsEvent {
    NSURL * _URL;
    NSError * _error;
}

@property (nonatomic, readonly, copy) NSURL *URL;
@property (nonatomic, copy) NSError *error;

- (void).cxx_destruct;
- (id)URL;
- (id)error;
- (id)initWithURL:(id)arg1;
- (void)setError:(id)arg1;

@end
