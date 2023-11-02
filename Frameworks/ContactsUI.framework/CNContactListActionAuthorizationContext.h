
@interface CNContactListActionAuthorizationContext : NSObject {
    <CNContactListAction> * _action;
    long long  _type;
}

@property (nonatomic, retain) <CNContactListAction> *action;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (id)action;
- (void)setAction:(id)arg1;
- (void)setType:(long long)arg1;
- (long long)type;

@end
