
@interface EKCalendarPreviewEventsEditItem : EKCalendarEditItem {
    EKICSPreviewController * _previewController;
    NSArray * _previewEventViews;
    DAESubscribedCalendarSummary * _previewSummary;
}

- (void).cxx_destruct;
- (void)calendarEditor:(id)arg1 didSelectSubitem:(unsigned long long)arg2;
- (id)cellForSubitemAtIndex:(unsigned long long)arg1;
- (id)chooseEventsForPreview:(id)arg1 count:(unsigned long long)arg2;
- (id)headerTitle;
- (id)initWithPreviewSummary:(id)arg1;

@end
