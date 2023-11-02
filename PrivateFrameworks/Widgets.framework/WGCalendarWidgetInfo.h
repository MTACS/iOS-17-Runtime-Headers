
@interface WGCalendarWidgetInfo : WGWidgetInfo {
    NSDate * _date;
}

@property (setter=_setDate:, nonatomic, retain) NSDate *date;

+ (bool)isCalendarExtension:(id)arg1;

- (void).cxx_destruct;
- (void)_handleSignificantTimeChange:(id)arg1;
- (id)_queue_iconWithOutlineForWidgetWithIdentifier:(id)arg1 extension:(id)arg2;
- (id)_queue_iconWithSize:(struct CGSize { double x1; double x2; })arg1 scale:(double)arg2 forWidgetWithIdentifier:(id)arg3 extension:(id)arg4;
- (void)_resetIconsImpl;
- (void)_setDate:(id)arg1;
- (id)date;
- (id)initWithExtension:(id)arg1;

@end
