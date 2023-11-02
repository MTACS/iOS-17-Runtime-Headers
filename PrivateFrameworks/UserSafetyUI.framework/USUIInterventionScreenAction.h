
@interface USUIInterventionScreenAction : NSObject {
    long long  _actionID;
    bool  _primary;
    NSString * _title;
}

@property (nonatomic) long long actionID;
@property (nonatomic) bool primary;
@property (nonatomic, copy) NSString *title;

+ (id)action:(id)arg1 primary:(bool)arg2 actionID:(long long)arg3;

- (void).cxx_destruct;
- (long long)actionID;
- (bool)primary;
- (void)setActionID:(long long)arg1;
- (void)setPrimary:(bool)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
