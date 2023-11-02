
@interface SXQuickLookRouter : NSObject <SXQuickLookRouter> {
    <TFResolver> * _resolver;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <TFResolver> *resolver;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithResolver:(id)arg1;
- (void)presentFile:(id)arg1 transitionContext:(id)arg2;
- (id)resolver;

@end
