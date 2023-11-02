
@interface JFXCustomRenderProperties : NSObject {
    bool  _animojiTapPoint;
    id  _metadata;
    <PVCompositeDelegate> * _renderingDelegate;
}

@property (nonatomic) bool animojiTapPoint;
@property (nonatomic, readonly) id metadata;
@property (nonatomic, readonly) <PVCompositeDelegate> *renderingDelegate;

+ (id)newCustomRenderProperties:(id)arg1 metadata:(id)arg2;

- (void).cxx_destruct;
- (bool)animojiTapPoint;
- (id)metadata;
- (id)renderingDelegate;
- (void)setAnimojiTapPoint:(bool)arg1;

@end
