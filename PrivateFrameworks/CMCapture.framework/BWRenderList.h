
@interface BWRenderList : NSObject <BWRenderListParameterListProvider> {
    bool  _affectsMetadata;
    bool  _isolationQueuePrepared;
    NSSet * _originalFilterNames;
    struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; } * _originalMarkerRendererNode;
    struct BWRenderListParameterList { 
        struct BWRenderListParameterNode {} *slh_first; 
    }  _parameterList;
    NSObject<OS_dispatch_queue> * _preparationIsolationQueue;
    NSSet * _processedFilterNames;
    struct BWRenderListRendererList { 
        struct BWRenderListRendererNode {} *slh_first; 
    }  _rendererList;
    bool  _supportsAnimation;
}

@property (nonatomic, readonly) bool affectsMetadata;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSSet *originalFilterNames;
@property (nonatomic, readonly) struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*parameterList;
@property (getter=isPrepared, nonatomic) bool prepared;
@property (nonatomic, readonly) NSSet *processedFilterNames;
@property (nonatomic, readonly) bool producesOriginalRender;
@property (nonatomic, readonly) struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*rendererList;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool supportsAnimation;

+ (void)initialize;
+ (id)shallowDepthOfFieldFilterName;

- (bool)affectsMetadata;
- (void)dealloc;
- (id)description;
- (id)initWithAnimationSupported:(bool)arg1 affectsMetadata:(bool)arg2;
- (id)initWithResourceProvider:(id)arg1 originalFilters:(id)arg2 processedFilters:(id)arg3 optimizationStrategy:(short)arg4;
- (bool)isPrepared;
- (id)originalFilterNames;
- (struct BWRenderListParameterList { struct BWRenderListParameterNode {} *x1; }*)parameterList;
- (void)prepareWithParameters:(id)arg1 forInputVideoFormat:(id)arg2 inputDepthFormat:(id)arg3;
- (id)processedFilterNames;
- (bool)producesOriginalRender;
- (struct BWRenderListRendererList { struct BWRenderListRendererNode {} *x1; }*)rendererList;
- (void)setPrepared:(bool)arg1;
- (bool)shouldAllowOriginalRenderFromNode:(struct BWRenderListRendererNode { struct { struct BWRenderListRendererNode {} *x_1_1_1; } x1; id x2; }*)arg1;
- (bool)supportsAnimation;

@end
