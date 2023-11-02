
@interface StocksUI.StockChartViewController : UIViewController {
    void activeCallout;
    void activityIndicator;
    void calloutViewProvider;
    void columnChartViewController;
    void dateRangePicker;
    void errorView;
    void eventHandler;
    void interactionDisplayView;
    void interactionHandler;
    void lineChartViewController;
    void loadingState;
    void rangeCalloutViewProvider;
    void stateMachine;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  stock;
    void styler;
    void topDateRangePickerSeparator;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
