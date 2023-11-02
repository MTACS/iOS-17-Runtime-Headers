
@interface SXComponentViewEngine : NSObject <SXComponentViewEngine> {
    SXComponentTypeMatching * _factoryMatching;
    <SXComponentViewPostProcessorManager> * _postProcessorManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) SXComponentTypeMatching *factoryMatching;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SXComponentViewPostProcessorManager> *postProcessorManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addFactory:(id)arg1;
- (id)componentViewForComponent:(id)arg1;
- (id)factoryMatching;
- (id)initWithPostProcessorManager:(id)arg1;
- (id)postProcessorManager;
- (void)removeFactory:(id)arg1;

@end
