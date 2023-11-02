
@interface BLURLRequestEncoder : AMSURLRequestEncoder <AMSRequestEncoding> {
    unsigned long long  _contentType;
    NSNumber * _dsid;
    long long  _reason;
}

@property (nonatomic) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSNumber *dsid;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long reason;
@property (readonly) Class superclass;

+ (id)DAAPClientVersionString;
+ (id)DAAPPurchaseVersionString;

- (void).cxx_destruct;
- (unsigned long long)contentType;
- (id)dsid;
- (id)initWithBag:(id)arg1 withURLRequest:(id)arg2;
- (long long)reason;
- (id)requestByEncodingRequest:(id)arg1 parameters:(id)arg2;
- (void)setContentType:(unsigned long long)arg1;
- (void)setDsid:(id)arg1;
- (void)setReason:(long long)arg1;

@end
