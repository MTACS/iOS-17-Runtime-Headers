
@interface ODICycle : NSObject

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBoxWithIsTight:(bool)arg1 state:(id)arg2;
+ (bool)map1NodeWithState:(id)arg1;
+ (bool)map2NodeWithState:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })mapGSpaceWithState:(id)arg1;
+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;
+ (void)mapNode:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapTransition:(id)arg1 index:(unsigned int)arg2 state:(id)arg3;
+ (void)mapWithState:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })nodeBoundsWithIndex:(unsigned int)arg1 state:(id)arg2;
+ (unsigned long long)nodeCountWithState:(id)arg1;
+ (struct CGSize { double x1; double x2; })nodeSizeWithState:(id)arg1;

@end
