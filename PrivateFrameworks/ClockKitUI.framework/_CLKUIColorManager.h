
@interface _CLKUIColorManager : NSObject {
    UIColor * _color;
    CALayer * _layer;
}

@property (nonatomic, retain) UIColor *color;
@property (nonatomic, readonly) UIColor *contentColor;
@property (nonatomic, retain) CALayer *layer;

- (void).cxx_destruct;
- (void)_updateFilterColor;
- (id)color;
- (id)contentColor;
- (id)layer;
- (void)setColor:(id)arg1;
- (void)setLayer:(id)arg1;
- (bool)shouldAnimatePropertyWithKey:(id)arg1;

@end
