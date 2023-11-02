
@interface HKMCCycleTimelinePillConfiguration : NSObject {
    double  _spacing;
    double  _width;
}

@property (nonatomic, readonly) double spacing;
@property (nonatomic, readonly) double width;

+ (id)pillConfigurationWithWidth:(double)arg1 spacing:(double)arg2;

- (double)heightWithAspectRatio:(double)arg1;
- (double)spacing;
- (double)width;

@end
