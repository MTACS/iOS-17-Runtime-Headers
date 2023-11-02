
@interface WLQRCodeProvider : NSObject <WLRequestDelegate> {
    NSMutableArray * _codes;
    <WLQRCodeProviderDelegate> * _delegate;
    WLRequest * _request;
    NSMutableArray * _urls;
    bool  _useGooglePlayStore;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WLQRCodeProviderDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool useGooglePlayStore;

- (void).cxx_destruct;
- (void)complete;
- (id)delegate;
- (void)drainQueue;
- (void)request;
- (void)requestDidFinish:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUseGooglePlayStore:(bool)arg1;
- (bool)useGooglePlayStore;

@end
