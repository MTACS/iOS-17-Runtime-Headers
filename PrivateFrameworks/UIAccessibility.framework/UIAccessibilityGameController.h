
@interface UIAccessibilityGameController : NSObject {
    GCController * _controller;
    UIAccessibilityGamepadEventSource * _eventSource;
}

@property (nonatomic, retain) GCController *controller;
@property (nonatomic, retain) UIAccessibilityGamepadEventSource *eventSource;

+ (id)sharedGameController;

- (void).cxx_destruct;
- (id)controller;
- (id)eventSource;
- (id)identifier;
- (id)init;
- (void)pressButton:(id)arg1;
- (id)productCategory;
- (void)setController:(id)arg1;
- (void)setEventSource:(id)arg1;
- (id)vendorName;

@end
