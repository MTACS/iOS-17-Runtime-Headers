
@interface CLSDarwinNotification : NSObject {
    id /* block */  _block;
    NSString * _name;
    <NSObject> * _observer;
    NSDictionary * _userInfo;
}

@property (readonly) id /* block */ block;
@property (readonly, copy) NSString *name;
@property (readonly) <NSObject> *observer;
@property (readonly, copy) NSDictionary *userInfo;

- (void).cxx_destruct;
- (id /* block */)block;
- (id)initWithObserver:(id)arg1 name:(id)arg2 block:(id /* block */)arg3;
- (id)name;
- (id)observer;
- (id)userInfo;

@end
