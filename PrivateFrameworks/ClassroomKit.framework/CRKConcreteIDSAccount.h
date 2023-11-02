
@interface CRKConcreteIDSAccount : NSObject <CRKIDSAccount, IDSAccountDelegate> {
    IDSAccount * _account;
    bool  _active;
}

@property (nonatomic, retain) IDSAccount *account;
@property (getter=isActive, nonatomic) bool active;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *loginID;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)account;
- (void)account:(id)arg1 isActiveChanged:(bool)arg2;
- (id)description;
- (id)initWithAccount:(id)arg1;
- (bool)isActive;
- (id)loginID;
- (void)setAccount:(id)arg1;
- (void)setActive:(bool)arg1;
- (void)updateIsActive;
- (void)updateWithAccount:(id)arg1;

@end
