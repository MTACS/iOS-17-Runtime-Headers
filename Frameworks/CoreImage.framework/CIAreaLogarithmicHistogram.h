
@interface CIAreaLogarithmicHistogram : CIAreaHistogram {
    NSNumber * inputMaximumStop;
    NSNumber * inputMinimumStop;
}

@property (nonatomic, retain) NSNumber *inputMaximumStop;
@property (nonatomic, retain) NSNumber *inputMinimumStop;

+ (id)customAttributes;

- (id)inputMaximumStop;
- (id)inputMinimumStop;
- (id)outputImage;
- (void)setInputMaximumStop:(id)arg1;
- (void)setInputMinimumStop:(id)arg1;

@end
