
@interface _HKHorizontalSingleLineSeriesMarkEntry : NSObject {
    long long  _markStyle;
    double  _xCoord;
}

@property (nonatomic, readonly) long long markStyle;
@property (nonatomic, readonly) double xCoord;

- (id)initWithXCoord:(double)arg1 markStyle:(long long)arg2;
- (long long)markStyle;
- (double)xCoord;

@end
