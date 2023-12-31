
@interface UIStatusBarBreadcrumbItemView : UIStatusBarSystemNavigationItemView {
    NSString * _destinationText;
    UISystemNavigationAction * _systemNavigationAction;
}

@property (nonatomic, retain) NSString *destinationText;
@property (nonatomic, retain) UISystemNavigationAction *systemNavigationAction;

- (void).cxx_destruct;
- (id)destinationText;
- (double)extraRightPadding;
- (long long)labelLineBreakMode;
- (void)setDestinationText:(id)arg1;
- (void)setSystemNavigationAction:(id)arg1;
- (id)shortenedTitleWithCompressionLevel:(int)arg1;
- (id)systemNavigationAction;
- (bool)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)userDidActivateButton:(id)arg1;

@end
