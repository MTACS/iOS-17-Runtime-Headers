
@interface MeasureFoundation.WorldLineGuide : MeasureFoundation.MeasureObject {
    void anchorState;
    void backingPlanes;
    void end1Anchor;
    void end2Anchor;
    void guideType;
    void segments;
}

- (void).cxx_destruct;
- (id)init;

@end
