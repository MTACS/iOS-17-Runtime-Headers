
@interface TVImageDecorator : NSObject

@property (nonatomic, readonly, copy) NSString *decoratorIdentifier;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } expectedSize;
@property (nonatomic, readonly) bool loaderCropToFit;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } loaderScaleToSize;

- (id)decorate:(id)arg1 scaledWithSize:(struct CGSize { double x1; double x2; })arg2 croppedToFit:(bool)arg3;
- (id)decoratorIdentifier;
- (struct CGSize { double x1; double x2; })expectedSize;
- (bool)isEqual:(id)arg1;
- (bool)loaderCropToFit;
- (struct CGSize { double x1; double x2; })loaderScaleToSize;

@end
