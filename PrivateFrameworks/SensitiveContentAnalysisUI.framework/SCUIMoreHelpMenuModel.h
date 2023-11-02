
@interface SCUIMoreHelpMenuModel : NSObject {
    NSArray * _actions;
    NSString * _title;
}

@property (nonatomic, retain) NSArray *actions;
@property (nonatomic, copy) NSString *title;

+ (void)addDefaultActionsTo:(id)arg1;
+ (void)addMenuActionsTo:(id)arg1 interventionType:(long long)arg2;
+ (void)addOptionalActionsTo:(id)arg1 options:(long long)arg2;
+ (id)menuTitleWith:(long long)arg1;
+ (id)modelWithOptions:(long long)arg1 interventionType:(long long)arg2;

- (void).cxx_destruct;
- (id)actions;
- (void)setActions:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
