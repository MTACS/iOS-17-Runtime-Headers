
@interface ODIHorizonalList3 : NSObject {
    unsigned int  mMaxPointCount;
    ODIState * mState;
}

+ (bool)mapIdentifier:(id)arg1 state:(id)arg2;

- (void).cxx_destruct;
- (id)initWithState:(id)arg1;
- (void)map;
- (void)mapBaseStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapOnePillarStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)mapPillarPoints:(id)arg1 bounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
- (void)mapRoofStyleFromPoint:(id)arg1 shape:(id)arg2;
- (void)setMaxPointCount:(unsigned int)arg1;

@end
