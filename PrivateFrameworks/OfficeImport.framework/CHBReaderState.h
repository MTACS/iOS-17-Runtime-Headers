
@interface CHBReaderState : CHBState {
    <CHAutoStyling> * mAutoStyling;
    int  mAxisGroup;
    EBReaderSheetState * mEBReaderSheetState;
    void * mXlCurrentPlot;
    int  mXlCurrentPlotIndex;
    void * mXlReader;
}

@property (nonatomic, readonly) OADColorScheme *colorScheme;

- (void).cxx_destruct;
- (id)autoStyling;
- (int)axisGroup;
- (id)colorScheme;
- (const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)defaultFormatForXlSeries:(const void*)arg1;
- (id)ebReaderSheetState;
- (id)initWithEBReaderSheetState:(id)arg1;
- (void)readAndCacheXlChartDataSeries;
- (id)resources;
- (void)setAxisGroup:(int)arg1;
- (void)setChart:(id)arg1;
- (void)setXlCurrentPlot:(void*)arg1;
- (void)setXlCurrentPlotIndex:(int)arg1;
- (id)workbook;
- (const struct XlChartSeriesFormat { int (**x1)(); struct XlChartLineStyle {} *x2; struct XlChartFillStyle {} *x3; struct XlChartMarkerStyle {} *x4; struct XlChartPicF {} *x5; char *x6; char *x7; unsigned int x8; unsigned int x9; int x10; unsigned short x11; unsigned short x12; unsigned short x13; int x14; bool x15; bool x16; bool x17; bool x18; bool x19; bool x20; bool x21; bool x22; bool x23; bool x24; }*)xlCurrentDefaultSeriesFormat;
- (void*)xlCurrentPlot;
- (int)xlCurrentPlotIndex;
- (int)xlPlotCount;
- (void*)xlReader;

@end
