
@interface TIKeyboardActivityControllerMock : NSObject <TIKeyboardActivityControlling>

@property (nonatomic, readonly) unsigned long long activityState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (unsigned long long)activityState;
- (void)addActivityObserver:(id)arg1;
- (void)removeActivityObserver:(id)arg1;

@end
