
@interface IDSSignInServiceUserInfo : NSObject {
    unsigned long long  _status;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long status;
@property (nonatomic, readonly) unsigned long long type;

- (id)description;
- (id)initWithUserType:(unsigned long long)arg1 status:(unsigned long long)arg2;
- (unsigned long long)status;
- (unsigned long long)type;

@end
