
@interface CHDChartTypeWithGrouping : CHDChartType {
    int  mGrouping;
}

- (id)chdGroupingString;
- (int)grouping;
- (id)initWithChart:(id)arg1;
- (bool)isGroupingStacked;
- (void)setGrouping:(int)arg1;

@end
