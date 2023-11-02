
@interface SXFormatModule : NSObject <SXFormatModule> {
    <TFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createViewController;
- (id)initWithResolver:(id)arg1;
- (id)resolver;

@end
