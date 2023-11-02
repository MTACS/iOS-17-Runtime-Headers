
@interface IHKHarmonizationResult : NSObject {
    float  _gatingScore;
    struct CGImage { } * _harmonized;
    bool  _shouldHarmonize;
}

@property (readonly) float gatingScore;
@property (readonly) struct CGImage { }*harmonized;
@property (readonly) bool shouldHarmonize;

- (void)dealloc;
- (float)gatingScore;
- (struct CGImage { }*)harmonized;
- (id)initWithHarmonized:(struct CGImage { }*)arg1 gatingScore:(float)arg2 shouldHarmonize:(bool)arg3;
- (bool)shouldHarmonize;

@end
