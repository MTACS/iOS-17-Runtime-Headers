
@interface MKVKImageSourceKeyImageResult : NSObject {
    NSMutableSet * _imageDatas;
    NSMutableArray * _mutableFullBleedColors;
    NSMutableArray * _mutableImages;
    MKVKImageSourceCalculationParameters * _parameters;
    bool  _sameFullBleedColors;
    NSMutableArray * _triedKeys;
}

@property (nonatomic, readonly) NSArray *fullBleedColors;
@property (nonatomic, retain) NSMutableSet *imageDatas;
@property (nonatomic, readonly) NSArray *images;
@property (nonatomic, retain) NSMutableArray *mutableImages;
@property (nonatomic, readonly) MKVKImageSourceCalculationParameters *parameters;
@property (getter=hasSameFullBleedColors, nonatomic, readonly) bool sameFullBleedColors;
@property (nonatomic, retain) NSMutableArray *triedKeys;

- (void).cxx_destruct;
- (void)addFullBleedColor:(id)arg1;
- (id)fullBleedColors;
- (bool)hasSameFullBleedColors;
- (id)imageDatas;
- (id)images;
- (id)initWithParameters:(id)arg1;
- (id)mutableImages;
- (id)parameters;
- (void)setImageDatas:(id)arg1;
- (void)setMutableImages:(id)arg1;
- (void)setTriedKeys:(id)arg1;
- (id)triedKeys;

@end
