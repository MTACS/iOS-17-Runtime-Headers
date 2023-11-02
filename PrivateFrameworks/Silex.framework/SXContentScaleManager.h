
@interface SXContentScaleManager : NSObject <SXContentScaleManager> {
    long long  _contentScale;
    double  _contentScaleFactor;
    <SXContentScaleManagerDelegate> * _delegate;
}

@property (nonatomic) long long contentScale;
@property (nonatomic, readonly) double contentScaleFactor;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SXContentScaleManagerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (long long)contentScale;
- (double)contentScaleFactor;
- (void)decrease;
- (id)delegate;
- (void)increase;
- (id)initWithContentScale:(long long)arg1;
- (void)reset;
- (void)setContentScale:(long long)arg1;
- (void)setDelegate:(id)arg1;

@end
