
@interface SCUIMoreHelpMenuAction : NSObject {
    long long  _actionID;
    bool  _destructive;
    NSString * _title;
}

@property (nonatomic) long long actionID;
@property (nonatomic) bool destructive;
@property (nonatomic, copy) NSString *title;

+ (id)action:(id)arg1 destructive:(bool)arg2 actionID:(long long)arg3;

- (void).cxx_destruct;
- (long long)actionID;
- (bool)destructive;
- (void)setActionID:(long long)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
