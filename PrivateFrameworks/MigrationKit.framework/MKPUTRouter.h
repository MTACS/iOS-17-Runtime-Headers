
@interface MKPUTRouter : NSObject <MKHTTPRouter> {
    <MKPUTRouterDelegate> * _delegate;
    NSDictionary * _routing;
    NSMutableArray * _supportedContentTypes;
    NSArray * _supportedTransferEncodings;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <MKPUTRouterDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableArray *supportedContentTypes;
@property (nonatomic, retain) NSArray *supportedTransferEncodings;

- (void).cxx_destruct;
- (id)delegate;
- (id)init;
- (bool)isAllowedPath:(id)arg1;
- (void)server:(id)arg1 didReceiveRequest:(id)arg2 response:(id)arg3;
- (void)setDelegate:(id)arg1;
- (void)setSupportedContentTypes:(id)arg1;
- (void)setSupportedTransferEncodings:(id)arg1;
- (id)supportedContentTypes;
- (id)supportedTransferEncodings;

@end
