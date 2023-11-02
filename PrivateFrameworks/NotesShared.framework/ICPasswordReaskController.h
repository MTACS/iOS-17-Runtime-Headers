
@interface ICPasswordReaskController : NSObject

+ (id)sharedController;

- (void)enrollInReaskForAccount:(id)arg1;
- (bool)isEnrolledInReaskForAccount:(id)arg1;
- (id)keyForEnrolledInReask:(id)arg1;
- (id)keyForLastReaskDate:(id)arg1;
- (id)lastReaskDateForAccount:(id)arg1;
- (void)reaskPasswordForAccount:(id)arg1;
- (void)reaskPasswordForAccountIfNecessary:(id)arg1;
- (void)setIsEnrolledInReask:(bool)arg1 forAccount:(id)arg2;
- (void)setLastReaskDate:(id)arg1 forAccount:(id)arg2;
- (bool)shouldReaskForAccount:(id)arg1;

@end
