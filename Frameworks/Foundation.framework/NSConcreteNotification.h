
@interface NSConcreteNotification : NSNotification {
    NSString * name;
    id  object;
    NSDictionary * userInfo;
}

- (void)dealloc;
- (id)initWithName:(id)arg1 object:(id)arg2 userInfo:(id)arg3;
- (id)name;
- (id)object;
- (id)userInfo;

@end
