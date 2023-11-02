
@interface ICQQuotaAppDetailsResponse : AAResponse {
    NSMutableArray * _apps;
}

@property (nonatomic, readonly) NSArray *apps;

- (void).cxx_destruct;
- (void)addApps:(id)arg1;
- (id)apps;
- (id)description;
- (id)initWithHTTPResponse:(id)arg1 data:(id)arg2;

@end
