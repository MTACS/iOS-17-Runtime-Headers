
@interface HKGraphViewRendererVirtualMarginConfiguration : NSObject {
    long long  _virtualLeftMarginStyle;
    double  _virtualLeftMarginWidth;
    long long  _virtualRightMarginStyle;
    double  _virtualRightMarginWidth;
}

@property (nonatomic, readonly) long long virtualLeftMarginStyle;
@property (nonatomic, readonly) double virtualLeftMarginWidth;
@property (nonatomic, readonly) long long virtualRightMarginStyle;
@property (nonatomic, readonly) double virtualRightMarginWidth;

- (id)initWithVirtualLeftMarginWidth:(double)arg1 virtualRightMarginWidth:(double)arg2 virtualLeftMarginStyle:(long long)arg3 virtualRightMarginStyle:(long long)arg4;
- (long long)virtualLeftMarginStyle;
- (double)virtualLeftMarginWidth;
- (long long)virtualRightMarginStyle;
- (double)virtualRightMarginWidth;

@end
