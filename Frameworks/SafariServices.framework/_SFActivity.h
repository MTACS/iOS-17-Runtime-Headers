
@interface _SFActivity : UIActivity {
    <_SFActivityDelegate> * _delegate;
}

@property (nonatomic) <_SFActivityDelegate> *delegate;

- (void).cxx_destruct;
- (void)activityDidFinish:(bool)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
