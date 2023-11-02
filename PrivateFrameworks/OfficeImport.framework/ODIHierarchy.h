
@interface ODIHierarchy : NSObject {
    int  mMaxMappableTreeDepth;
    NSMutableDictionary * mNodeInfoMap;
    ODIState * mState;
    int  mType;
}

+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundsOfNode:(id)arg1;
- (void)createInfoForNode:(id)arg1 depth:(int)arg2;
- (id)infoForNode:(id)arg1;
- (id)initWithType:(int)arg1 state:(id)arg2;
- (void)map;
- (void)mapLogicalBoundsWithXRanges:(const void*)arg1;
- (void)mapNode:(id)arg1;
- (void*)mapRangesForNode:(id)arg1;
- (void)setAbsolutePositionOfNode:(id)arg1 parentRow:(int)arg2 parentXOffset:(float)arg3;

@end
