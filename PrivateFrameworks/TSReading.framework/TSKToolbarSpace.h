
@interface TSKToolbarSpace : NSObject {
    double  _width;
}

@property (getter=isEnabled, nonatomic) bool enabled;
@property (nonatomic) double width;

+ (id)spaceWithWidth:(double)arg1;

- (bool)isEnabled;
- (void)setEnabled:(bool)arg1;
- (void)setWidth:(double)arg1;
- (double)width;

@end
