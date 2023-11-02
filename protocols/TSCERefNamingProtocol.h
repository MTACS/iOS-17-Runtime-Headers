
@protocol TSCERefNamingProtocol <NSObject>

@required

- (NSString *)cellRangeNameFromChromeRangeRef:(const void*)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)chromeNameForBaseRangeRef:(const void*)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (id)initWithCalcEngine:(TSCECalculationEngine *)arg1;
- (NSString *)nameForBaseRangeRef:(const void*)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForBaseTractRef:(TSCECellTractRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex { unsigned short x1; }*)arg1 inTable:(const struct TSKUIDStruct { unsigned long long x1; unsigned long long x2; }*)arg2 useSymbolicNames:(bool)arg3;
- (NSString *)nameForChromeRangeRef:(const void*)arg1 namingContext:(TSCERefNamingContext *)arg2;
- (NSString *)nameForViewTractRef:(TSCECellTractRef *)arg1 namingContext:(TSCERefNamingContext *)arg2 coordMapper:(TSCECoordMapper *)arg3;
- (NSString *)nameForWrappedRangeRef:(TSCEWrappedRangeRef *)arg1 namingContext:(TSCERefNamingContext *)arg2;

@end
