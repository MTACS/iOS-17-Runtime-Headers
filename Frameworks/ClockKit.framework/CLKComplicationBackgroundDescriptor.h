
@interface CLKComplicationBackgroundDescriptor : NSObject {
    NSArray * _backgroundColors;
    NSArray * _backgroundLocations;
    long long  _style;
}

@property (nonatomic, readonly, copy) NSArray *backgroundColors;
@property (nonatomic, readonly, copy) NSArray *backgroundLocations;
@property (nonatomic, readonly) long long style;

- (void).cxx_destruct;
- (id)backgroundColors;
- (id)backgroundLocations;
- (id)initWithBackgroundColor:(id)arg1;
- (id)initWithClearBackground;
- (id)initWithGradientBackgroundColors:(id)arg1;
- (id)initWithGradientBackgroundColors:(id)arg1 locations:(id)arg2;
- (id)initWithMaterialBackground;
- (long long)style;

@end
