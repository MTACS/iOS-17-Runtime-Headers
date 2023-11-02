
@interface SOAuthorizationPool : NSObject {
    NSMutableArray * _pool;
}

- (void).cxx_destruct;
- (void)addAuthorization:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)removeAuthorization:(id)arg1;

@end
