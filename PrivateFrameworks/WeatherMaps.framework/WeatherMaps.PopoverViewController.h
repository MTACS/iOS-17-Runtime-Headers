
@interface WeatherMaps.PopoverViewController : UIViewController {
    void $__lazy_storage_$_conditionLabel;
    void $__lazy_storage_$_locationLabel;
    void $__lazy_storage_$_openLocationButton;
    void $__lazy_storage_$_separator;
    void $__lazy_storage_$_temperatureLabel;
    void $__lazy_storage_$_temperatureRangeLabel;
    void $__lazy_storage_$_timeLabel;
    void $__lazy_storage_$_viewLocationButton;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  currentWeather;
    void delegate;
    void horizontalSpacing;
    void isSelectedLocation;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  location;
    void maxWidth;
    void minWidth;
    void padding;
    void unitObserver;
    void verticalSpacing;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end
