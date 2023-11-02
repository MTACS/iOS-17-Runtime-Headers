
@interface _UICalloutBarButtonMetrics : NSObject {
    double  _cornerRadius;
    double  _height;
    double  _horizontalPadding;
    double  _imageWidth;
    double  _minimumTitleAndImageSpacing;
    bool  _prefersCustomSelection;
}

@property (nonatomic, readonly) double cornerRadius;
@property (nonatomic, readonly) double height;
@property (nonatomic, readonly) double horizontalPadding;
@property (nonatomic, readonly) double imageWidth;
@property (nonatomic, readonly) double minimumTitleAndImageSpacing;
@property (nonatomic, readonly) bool prefersCustomSelection;

- (double)cornerRadius;
- (double)height;
- (double)horizontalPadding;
- (double)imageWidth;
- (id)init;
- (double)minimumTitleAndImageSpacing;
- (bool)prefersCustomSelection;

@end
