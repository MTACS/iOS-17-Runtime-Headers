
@interface VKCExternalQuickActionsResult : NSObject {
    UIButton * _moreButton;
    NSArray * _quickActions;
}

@property (nonatomic, retain) UIButton *moreButton;
@property (nonatomic, retain) NSArray *quickActions;

- (void).cxx_destruct;
- (id)moreButton;
- (id)quickActions;
- (void)setMoreButton:(id)arg1;
- (void)setQuickActions:(id)arg1;

@end
