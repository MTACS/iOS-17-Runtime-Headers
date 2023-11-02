
@interface SBSceneBackgroundedStatusAssertion : NSObject {
    id /* block */  _invalidationHandler;
    NSSet * _scenes;
}

@property (nonatomic, readonly, copy) NSSet *scenes;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithScenes:(id)arg1 invalidationHandler:(id /* block */)arg2;
- (void)invalidate;
- (id)scenes;

@end
