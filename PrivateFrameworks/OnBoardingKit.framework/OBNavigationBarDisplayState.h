
@interface OBNavigationBarDisplayState : NSObject {
    double  _backgroundOpacity;
    double  _titleOpacity;
}

@property (nonatomic) double backgroundOpacity;
@property (nonatomic) double titleOpacity;

+ (id)displayStateForNavigationBar:(id)arg1;

- (void)applyState:(id)arg1;
- (double)backgroundOpacity;
- (id)initWithNavigationBar:(id)arg1;
- (void)setBackgroundOpacity:(double)arg1;
- (void)setTitleOpacity:(double)arg1;
- (double)titleOpacity;

@end
