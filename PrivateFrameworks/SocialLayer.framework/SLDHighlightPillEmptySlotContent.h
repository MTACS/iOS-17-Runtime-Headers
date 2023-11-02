
@interface SLDHighlightPillEmptySlotContent : SLDEmptySlotContent {
    double  _maxWidth;
    unsigned long long  _variant;
}

@property (nonatomic) double maxWidth;
@property (nonatomic) unsigned long long variant;

- (id)initWithStyle:(id)arg1 variant:(unsigned long long)arg2 maxWidth:(double)arg3 forRemote:(bool)arg4;
- (double)maxWidth;
- (void)setMaxWidth:(double)arg1;
- (void)setVariant:(unsigned long long)arg1;
- (unsigned long long)variant;

@end
