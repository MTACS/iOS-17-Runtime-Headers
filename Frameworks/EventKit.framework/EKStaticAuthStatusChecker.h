
@interface EKStaticAuthStatusChecker : NSObject <EKAuthStatusChecker> {
    int  _eventAccessLevel;
    bool  _hasAccessToReminders;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) int eventAccessLevel;
@property (nonatomic, readonly) bool hasAccessToReminders;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)clearCachedAuthStatus;
- (int)eventAccessLevel;
- (bool)hasAccessToReminders;
- (id)initWithEventAccessLevel:(int)arg1 hasAccessToReminders:(bool)arg2;

@end
