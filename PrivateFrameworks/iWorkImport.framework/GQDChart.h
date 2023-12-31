
@interface GQDChart : GQDGraphic {
    bool  mIsLegendRetained;
    GQDChartLegend * mLegend;
    GQDChartModel * mModel;
    GQDSStyle * mStyle;
    long long  mType;
}

+ (const struct StateSpec { int (**x1)(); char *x2; int x3; int x4; struct Action {} *x5; int (*x6)(); int (*x7)(); int (*x8)(); struct ActionFinder {} *x9; }*)stateForReading;

- (void)dealloc;
- (id)graphicStyle;
- (id)legend;
- (id)model;
- (void)setLegend:(id)arg1;
- (id)style;
- (long long)type;

@end
