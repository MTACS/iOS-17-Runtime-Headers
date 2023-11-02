
@interface TDColorProperty : TDProperty {
    float  _alpha;
    float  _blue;
    float  _green;
    float  _red;
}

@property (nonatomic) float alpha;
@property (nonatomic) float blue;
@property (nonatomic) float green;
@property (nonatomic) float red;

- (void)addToDictionary:(id)arg1;
- (float)alpha;
- (float)blue;
- (void)dealloc;
- (float)green;
- (float)red;
- (void)setAlpha:(float)arg1;
- (void)setBlue:(float)arg1;
- (void)setGreen:(float)arg1;
- (void)setRed:(float)arg1;

@end
