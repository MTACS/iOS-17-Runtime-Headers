
@interface MUAspectRatioLayout : MUConstraintLayout {
    MUAspectRatioLayoutInternal * _internal;
}

@property (nonatomic) double aspectRatio;
@property (nonatomic) <MULayoutItem> *item;

- (void).cxx_destruct;
- (double)aspectRatio;
- (id)initWithItem:(id)arg1 aspectRatio:(double)arg2;
- (id)item;
- (void)setAspectRatio:(double)arg1;
- (void)setItem:(id)arg1;

@end
