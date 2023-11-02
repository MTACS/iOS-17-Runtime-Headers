
@interface AMSLookupItemArtworkColor : NSObject {
    double  _alpha;
    double  _blue;
    double  _green;
    double  _red;
}

@property (nonatomic) double alpha;
@property (nonatomic) double blue;
@property (nonatomic) double green;
@property (nonatomic) double red;

- (double)alpha;
- (double)blue;
- (double)green;
- (double)red;
- (void)setAlpha:(double)arg1;
- (void)setBlue:(double)arg1;
- (void)setGreen:(double)arg1;
- (void)setRed:(double)arg1;

@end
