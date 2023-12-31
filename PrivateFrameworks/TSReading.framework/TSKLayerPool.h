
@interface TSKLayerPool : NSObject {
    Class  mLayerClass;
    id  mLayerDelegate;
    NSMutableArray * mLayerPool;
}

@property (nonatomic) Class layerClass;
@property (nonatomic) id layerDelegate;

- (void)dealloc;
- (id)init;
- (Class)layerClass;
- (id)layerDelegate;
- (id)requestLayerFromPool;
- (void)returnLayerToPool:(id)arg1;
- (void)setLayerClass:(Class)arg1;
- (void)setLayerDelegate:(id)arg1;

@end
