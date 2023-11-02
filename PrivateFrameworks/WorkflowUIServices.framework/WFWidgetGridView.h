
@interface WFWidgetGridView : UIView <WFWidgetCellDelegate> {
    double  _cornerRadius;
    <WFWidgetGridViewDelegate> * _delegate;
    long long  _family;
    NSString * _lastKnownContentSizeCategory;
    struct CGSize { 
        double width; 
        double height; 
    }  _lastKnownSize;
    NSObject<OS_os_log> * _log;
    long long  _widgetType;
    NSArray * _workflows;
}

@property (nonatomic, readonly) double cornerRadius;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <WFWidgetGridViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long family;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *lastKnownContentSizeCategory;
@property (nonatomic) struct CGSize { double x1; double x2; } lastKnownSize;
@property (nonatomic, readonly) NSObject<OS_os_log> *log;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long widgetType;
@property (nonatomic, retain) NSArray *workflows;

- (void).cxx_destruct;
- (id)cellAtIndex:(unsigned long long)arg1;
- (bool)cellExistsAtIndex:(unsigned long long)arg1;
- (id)cellForWorkflowWithIdentifier:(id)arg1;
- (double)cornerRadius;
- (id)delegate;
- (void)disableAllCellsExceptCell:(id)arg1;
- (void)enableAllCells;
- (long long)family;
- (id)initWithFamily:(long long)arg1 widgetType:(long long)arg2 cornerRadius:(double)arg3 log:(id)arg4;
- (id)lastKnownContentSizeCategory;
- (struct CGSize { double x1; double x2; })lastKnownSize;
- (void)layoutWithWorkflows:(id)arg1;
- (id)log;
- (void)setDelegate:(id)arg1;
- (void)setLastKnownContentSizeCategory:(id)arg1;
- (void)setLastKnownSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setWorkflows:(id)arg1;
- (void)widgetCellDidTransitionToState:(long long)arg1;
- (void)widgetCellWasTapped:(id)arg1;
- (long long)widgetType;
- (id)workflowIdentifiersForVisibleCells;
- (id)workflows;

@end
