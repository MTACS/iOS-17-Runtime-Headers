
@interface SiriSetup.ColorLayer : CAShapeLayer {
    void layerBackgroundColor;
    void layerBlueColor;
    void layerRedColor;
}

@property (nonatomic) double phase;

+ (bool)needsDisplayForKey:(id)arg1;

- (void).cxx_destruct;
- (id)actionForKey:(id)arg1;
- (void)display;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLayer:(id)arg1;

@end
