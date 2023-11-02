
@interface PKQuotaNotification : PKNotification {
    NSURL * _quotaURL;
}

@property (retain) NSURL *quotaURL;

- (void).cxx_destruct;
- (void)_interpretResult:(unsigned long long)arg1 responseDict:(id)arg2;
- (id)quotaURL;
- (void)setQuotaURL:(id)arg1;

@end
