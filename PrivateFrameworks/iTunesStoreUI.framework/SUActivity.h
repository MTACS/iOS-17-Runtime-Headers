
@interface SUActivity : UIActivity {
    <SUActivityDelegate> * _delegate;
    UIImage * _suActivityImage;
    NSString * _suActivityTitle;
    NSString * _suActivityType;
    UIViewController * _suActivityViewController;
}

@property (nonatomic) <SUActivityDelegate> *ITunesStoreDelegate;

- (id)ITunesStoreDelegate;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)activityViewController;
- (bool)canPerformWithActivityItems:(id)arg1;
- (void)dealloc;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (void)setActivityImage:(id)arg1;
- (void)setActivityTitle:(id)arg1;
- (void)setActivityType:(id)arg1;
- (void)setActivityViewController:(id)arg1;
- (void)setITunesStoreDelegate:(id)arg1;

@end
