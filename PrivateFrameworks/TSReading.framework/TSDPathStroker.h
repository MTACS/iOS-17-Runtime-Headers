
@interface TSDPathStroker : NSObject {
    TSUColor * mColor;
    TSDPathStroker * mPrecedingStroker;
    double  mWidth;
}

@property (nonatomic) double width;

- (void)dealloc;
- (id)initWithProperties:(id)arg1 bundle:(id)arg2 dataManager:(void*)arg3 precedingStroker:(id)arg4;
- (void)setWidth:(double)arg1;
- (void)strokePath:(struct CGPath { }*)arg1 inContext:(struct CGContext { }*)arg2 inColor:(id)arg3;
- (double)width;

@end
