
@interface CUIKNotificationConflictCacheObject : NSObject {
    EKConflictDetails * _conflictInfo;
    unsigned long long  _state;
}

@property (retain) EKConflictDetails *conflictInfo;
@property unsigned long long state;

+ (id)keyForNotification:(id)arg1;

- (void).cxx_destruct;
- (id)conflictInfo;
- (void)setConflictInfo:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (unsigned long long)state;

@end
