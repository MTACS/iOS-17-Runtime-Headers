
@interface ACDAccountChange : NSObject {
    ACAccount * _account;
    int  _changeType;
    ACAccount * _oldAccount;
}

@property (nonatomic, readonly) ACAccount *account;
@property (nonatomic, readonly) int changeType;
@property (nonatomic, readonly) ACAccount *oldAccount;

+ (id)changeWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;

- (void).cxx_destruct;
- (id)account;
- (int)changeType;
- (id)initWithChangeType:(int)arg1 account:(id)arg2 oldAccount:(id)arg3;
- (id)oldAccount;

@end
