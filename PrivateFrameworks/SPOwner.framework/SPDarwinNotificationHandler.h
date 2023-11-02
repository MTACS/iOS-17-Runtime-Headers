
@interface SPDarwinNotificationHandler : NSObject {
    int  _notifyToken;
}

@property (nonatomic) int notifyToken;

- (void)dealloc;
- (id)initWithNotificationName:(id)arg1 changeBlock:(id /* block */)arg2;
- (int)notifyToken;
- (void)setNotifyToken:(int)arg1;

@end
