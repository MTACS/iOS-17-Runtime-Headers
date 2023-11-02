
@interface ICStoreDialogResponseButton : NSObject <NSCopying> {
    ICStoreDialogResponseButtonAction * _action;
    bool  _isDefaultButton;
    NSString * _title;
    long long  _type;
}

@property (nonatomic, readonly, copy) ICStoreDialogResponseButtonAction *action;
@property (nonatomic, readonly) bool isDefaultButton;
@property (nonatomic, readonly, copy) NSString *title;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)action;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithType:(long long)arg1 isDefaultButton:(bool)arg2 title:(id)arg3 action:(id)arg4;
- (bool)isDefaultButton;
- (id)title;
- (long long)type;

@end