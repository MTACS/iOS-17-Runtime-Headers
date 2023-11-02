
@interface SearchUIGradientView : UIView {
    NSArray * _colors;
}

@property (nonatomic, retain) NSArray *colors;
@property (nonatomic, readonly) CAGradientLayer *layer;

+ (Class)layerClass;

- (void).cxx_destruct;
- (id)colors;
- (id)init;
- (void)setColors:(id)arg1;

@end
