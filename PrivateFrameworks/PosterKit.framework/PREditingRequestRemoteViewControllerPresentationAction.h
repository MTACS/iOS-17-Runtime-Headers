
@interface PREditingRequestRemoteViewControllerPresentationAction : BSAction

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentedViewScreenRect;
@property (nonatomic, readonly) unsigned int sourceContextId;
@property (nonatomic, readonly) unsigned long long sourceLayerRenderId;

- (id)initWithSourceLayerRenderId:(unsigned long long)arg1 sourceContextId:(unsigned int)arg2 presentedViewScreenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentedViewScreenRect;
- (unsigned int)sourceContextId;
- (unsigned long long)sourceLayerRenderId;

@end
