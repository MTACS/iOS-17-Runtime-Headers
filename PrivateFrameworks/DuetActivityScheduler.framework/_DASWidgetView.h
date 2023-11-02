
@interface _DASWidgetView : _DASWidgetInfo {
    NSDate * _endDate;
    bool  _inStack;
    long long  _pageID;
    NSDate * _startDate;
    double  _timeUntilContentExpiration;
    NSString * _viewID;
}

@property (nonatomic, readonly) NSDate *endDate;
@property (nonatomic) bool inStack;
@property (nonatomic) long long pageID;
@property (nonatomic, readonly) NSDate *startDate;
@property (nonatomic) double timeUntilContentExpiration;
@property (nonatomic, readonly, copy) NSString *viewID;

+ (id)viewFrom:(id)arg1 to:(id)arg2 forWidgetID:(id)arg3;

- (void).cxx_destruct;
- (id)endDate;
- (bool)inStack;
- (id)initWithViewID:(id)arg1 budgetID:(id)arg2 extensionBundleID:(id)arg3 from:(id)arg4 to:(id)arg5;
- (long long)pageID;
- (void)setInStack:(bool)arg1;
- (void)setPageID:(long long)arg1;
- (void)setTimeUntilContentExpiration:(double)arg1;
- (id)startDate;
- (double)timeUntilContentExpiration;
- (id)viewID;

@end
