
@interface _NSCoreDataException : NSException {
    long long  _code;
    NSString * _domain;
}

- (void)dealloc;
- (id)errorObjectWithUserInfo:(id)arg1;
- (id)initWithName:(id)arg1 reason:(id)arg2 userInfo:(id)arg3;

@end
