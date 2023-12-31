
@interface CKFullscreenEffectMessageFilter : NSObject {
    double  _balloonAlpha;
    NSArray * _balloonBackdropFilters;
    CAFilter * _balloonCompositingFilter;
    NSArray * _balloonFilters;
    double  _contentAlpha;
    int  _direction;
    UIColor * _textColor;
    CAFilter * _textCompositingFilter;
    int  _type;
}

@property (nonatomic) double balloonAlpha;
@property (nonatomic, copy) NSArray *balloonBackdropFilters;
@property (nonatomic, copy) CAFilter *balloonCompositingFilter;
@property (nonatomic, copy) NSArray *balloonFilters;
@property (nonatomic) double contentAlpha;
@property (nonatomic) int direction;
@property (nonatomic, copy) UIColor *textColor;
@property (nonatomic, copy) CAFilter *textCompositingFilter;
@property (nonatomic) int type;

- (void).cxx_destruct;
- (double)balloonAlpha;
- (id)balloonBackdropFilters;
- (id)balloonCompositingFilter;
- (id)balloonFilters;
- (double)contentAlpha;
- (int)direction;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (void)setBalloonAlpha:(double)arg1;
- (void)setBalloonBackdropFilters:(id)arg1;
- (void)setBalloonCompositingFilter:(id)arg1;
- (void)setBalloonFilters:(id)arg1;
- (void)setContentAlpha:(double)arg1;
- (void)setDirection:(int)arg1;
- (void)setTextColor:(id)arg1;
- (void)setTextCompositingFilter:(id)arg1;
- (void)setType:(int)arg1;
- (id)textColor;
- (id)textCompositingFilter;
- (int)type;

@end
