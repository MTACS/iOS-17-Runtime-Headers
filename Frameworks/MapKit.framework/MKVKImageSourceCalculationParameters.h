
@interface MKVKImageSourceCalculationParameters : NSObject {
    NSArray * _imageSourceKeys;
    double  _scale;
}

@property (nonatomic, readonly, copy) NSArray *imageSourceKeys;
@property (nonatomic, readonly) double scale;

- (void).cxx_destruct;
- (id)imageSourceKeys;
- (id)initWithImageSourceKeys:(id)arg1 scale:(double)arg2;
- (double)scale;

@end
