
@protocol SBActivityAmbientObserverDelegate <NSObject>

@required

- (void)addActivityItem:(SBActivityItem *)arg1 forOngoingActivity:(bool)arg2;
- (void)dismissAmbientActivityAlert:(SBActivityAlert *)arg1;
- (void)presentAmbientActivityAlert:(SBActivityAlert *)arg1;
- (void)removeActivityItem:(SBActivityItem *)arg1;

@end
