
@interface PKEditGroupsAction : NSObject {
    NSString * _actionLabel;
    NSString * _actionType;
}

@property (nonatomic, retain) NSString *actionLabel;
@property (nonatomic, retain) NSString *actionType;

- (void).cxx_destruct;
- (id)actionLabel;
- (id)actionType;
- (id)initWithLabel:(id)arg1 type:(id)arg2;
- (void)setActionLabel:(id)arg1;
- (void)setActionType:(id)arg1;

@end
