
@interface WFDailyRoutineShortcut : NSObject {
    NSArray * _actionIcons;
    WFImage * _bannerImage;
    WFDailyRoutineShortcutSetupFlow * _setupFlow;
    NSString * _subtitle;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSArray *actionIcons;
@property (nonatomic, readonly, copy) WFImage *bannerImage;
@property (nonatomic, readonly) WFDailyRoutineShortcutSetupFlow *setupFlow;
@property (nonatomic, readonly, copy) NSString *subtitle;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)actionIcons;
- (id)bannerImage;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 bannerImage:(id)arg3 actionIcons:(id)arg4 setupFlow:(id)arg5;
- (id)setupFlow;
- (id)subtitle;
- (id)title;

@end
