
@interface PromotedContentUI.CalendarEventViewController : UIViewController <EKEventEditViewDelegate> {
    void actionDelegate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  actionResult;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  backgroundedTime;
    void calendarEvent;
    void eventStore;
    void notificationObserver;
    void notificationOpenObserver;
}

- (void).cxx_destruct;
- (void)eventEditViewController:(id)arg1 didCompleteWithAction:(long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillDisappear:(bool)arg1;

@end
