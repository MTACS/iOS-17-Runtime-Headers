
@interface UIInterfaceActionHighlightAttributes : NSObject <NSCopying> {
    UIColor * _backgroundColor;
    NSArray * _filters;
    double  _opacity;
}

@property (nonatomic, retain) UIColor *backgroundColor;
@property (nonatomic, retain) NSArray *filters;
@property (nonatomic) double opacity;

- (void).cxx_destruct;
- (bool)_hasNonClearBackgroundColor;
- (id)backgroundColor;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)filters;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)newBackgroundHighlightView;
- (double)opacity;
- (void)setBackgroundColor:(id)arg1;
- (void)setFilters:(id)arg1;
- (void)setOpacity:(double)arg1;

@end
