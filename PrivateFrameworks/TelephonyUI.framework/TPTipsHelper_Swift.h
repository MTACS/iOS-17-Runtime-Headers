
@interface TPTipsHelper_Swift : NSObject {
    void didSetup;
    void entries;
    void popoverController;
    void userInfo;
}

@property (nonatomic, retain) UIViewController *popoverController;

+ (void)donateEventCalledNonContact;
+ (void)donateEventCalledNonFavContact;
+ (void)donateEventKnownCallersDone;
+ (void)donateEventKnownStoryLaunched;
+ (void)donateEventOriginatedCallWithSiri;
+ (void)donateEventSavedNumber;
+ (void)donateEventSpeakerUsed;
+ (id)shared;

- (void).cxx_destruct;
- (id)init;
- (id)popoverController;
- (void)setPopoverController:(id)arg1;
- (void)setup;

@end
