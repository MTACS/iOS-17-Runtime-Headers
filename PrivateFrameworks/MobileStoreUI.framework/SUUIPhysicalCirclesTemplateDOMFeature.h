
@interface SUUIPhysicalCirclesTemplateDOMFeature : NSObject <SUUIDOMFeature> {
    IKAppContext * _appContext;
    <SUUIPhysicalCirclesTemplateDelegate> * _delegate;
    NSMutableArray * _domUpdateBlocks;
    NSString * _featureName;
    NSMutableArray * _pendingAnimationRequests;
}

@property (nonatomic, readonly) IKAppContext *appContext;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SUUIPhysicalCirclesTemplateDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *featureName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)featureName;
+ (id)makeFeatureJSObjectForFeature:(id)arg1;

- (void).cxx_destruct;
- (void)_addDOMUpdateBlock:(id /* block */)arg1;
- (void)_requestAnimation:(id)arg1;
- (id)appContext;
- (id)delegate;
- (id)featureName;
- (void)finishDOMUpdates;
- (id)initWithDOMNode:(id)arg1 featureName:(id)arg2;
- (id)popPendingAnimationRequests;
- (void)setDelegate:(id)arg1;

@end
