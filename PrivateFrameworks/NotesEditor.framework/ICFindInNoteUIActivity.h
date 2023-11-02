
@interface ICFindInNoteUIActivity : UIActivity {
    <ICFindInNoteUIActivityDelegate> * _delegate;
}

@property (nonatomic) <ICFindInNoteUIActivityDelegate> *delegate;

- (void).cxx_destruct;
- (id)_systemImageName;
- (long long)activityCategory;
- (id)activityTitle;
- (id)activityType;
- (bool)canPerformWithActivityItems:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)performActivity;
- (void)setDelegate:(id)arg1;

@end
