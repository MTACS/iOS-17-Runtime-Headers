
@interface FBSCAContextSceneLayer : FBSSceneLayer

@property (nonatomic, readonly) CAContext *CAContext;
@property (nonatomic, readonly) unsigned int contextID;

+ (id)layerWithCAContext:(id)arg1;

- (id)initWithCAContext:(id)arg1;
- (id)initWithCAContextID:(unsigned int)arg1 level:(double)arg2;

@end
