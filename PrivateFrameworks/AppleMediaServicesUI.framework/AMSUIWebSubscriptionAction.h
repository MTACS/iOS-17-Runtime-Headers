
@interface AMSUIWebSubscriptionAction : AMSUIWebAction <AMSUIWebActionRunnable> {
    long long  _cachePolicy;
    bool  _extendedCarrierCheck;
    long long  _mediaType;
}

@property (nonatomic) long long cachePolicy;
@property (nonatomic, readonly) AMSUIWebClientContext *context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) bool extendedCarrierCheck;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long mediaType;
@property (readonly) Class superclass;

- (long long)cachePolicy;
- (bool)extendedCarrierCheck;
- (id)initWithJSObject:(id)arg1 context:(id)arg2;
- (long long)mediaType;
- (id)runAction;
- (void)setCachePolicy:(long long)arg1;
- (void)setExtendedCarrierCheck:(bool)arg1;
- (void)setMediaType:(long long)arg1;

@end
