
@interface MTInterprocessChangeNotifier : NSObject {
    NSString * _identifier;
    int  _token;
}

+ (id)fullIdentifier:(id)arg1;
+ (void)notify:(id)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 onChange:(id /* block */)arg2;
- (void)notify;
- (void)stop;

@end
