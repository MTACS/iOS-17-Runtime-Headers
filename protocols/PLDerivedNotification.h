
@protocol PLDerivedNotification <NSObject>

@required

+ (id)notificationForDerivedObject:(id)arg1 priorChangeState:(id)arg2 forBackingObjectNotification:(PLChangeNotification *)arg3;

@end
