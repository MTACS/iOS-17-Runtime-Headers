
@interface HKLegendPointAnnotationStyle : NSObject <NSCopying> {
    HKAxisLabelStyle * _labelStyle;
    bool  _leftOfSeries;
    NSString * _localizedLabelKey;
}

@property (nonatomic, copy) HKAxisLabelStyle *labelStyle;
@property (nonatomic) bool leftOfSeries;
@property (nonatomic, copy) NSString *localizedLabelKey;

+ (id)annotationStyleWithLabelStyle:(id)arg1 localizedLabelKey:(id)arg2 leftOfSeries:(bool)arg3;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)labelStyle;
- (bool)leftOfSeries;
- (id)localizedLabelKey;
- (void)setLabelStyle:(id)arg1;
- (void)setLeftOfSeries:(bool)arg1;
- (void)setLocalizedLabelKey:(id)arg1;

@end
