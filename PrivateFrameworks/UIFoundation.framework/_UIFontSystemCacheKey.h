
@interface _UIFontSystemCacheKey : _UIFontCacheKey {
    NSString * _design;
    bool  _monospacedDigits;
    double  _pointSize;
    bool  _textLegibility;
    int  _traits;
    double  _weight;
    NSNumber * _width;
}

@property (nonatomic, copy) NSString *design;
@property (nonatomic) bool monospacedDigits;
@property (nonatomic) double pointSize;
@property (nonatomic) bool textLegibility;
@property (nonatomic) int traits;
@property (nonatomic) double weight;
@property (nonatomic, retain) NSNumber *width;

- (unsigned long long)_hash;
- (bool)_isEqualToKey:(id)arg1;
- (void)dealloc;
- (id)description;
- (id)design;
- (bool)monospacedDigits;
- (double)pointSize;
- (void)setDesign:(id)arg1;
- (void)setMonospacedDigits:(bool)arg1;
- (void)setPointSize:(double)arg1;
- (void)setTextLegibility:(bool)arg1;
- (void)setTraits:(int)arg1;
- (void)setWeight:(double)arg1;
- (void)setWidth:(id)arg1;
- (bool)textLegibility;
- (int)traits;
- (double)weight;
- (id)width;

@end
