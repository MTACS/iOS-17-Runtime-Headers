
@interface TSDPathManipulation : NSObject {
    TSDPathManipulation * mPrecedingManipulation;
}

- (bool)canDecomposeRectIntoParts;
- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingManipulation:(id)arg4;
- (struct CGPath { }*)manipulatePath:(struct CGPath { }*)arg1 withLineWidth:(double)arg2;

@end
