
@interface CRRequestUserConfirmationCommand : NSObject <CRCommand> {
    unsigned long long  commandDirection;
    NSDictionary * userInfo;
}

@property (nonatomic) unsigned long long commandDirection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (unsigned long long)commandDirection;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setCommandDirection:(unsigned long long)arg1;
- (void)setUserInfo:(id)arg1;
- (id)userInfo;

@end
