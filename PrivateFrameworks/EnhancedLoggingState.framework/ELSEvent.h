
@interface ELSEvent : NSObject

+ (void)createLoggingEventWith:(id)arg1;
+ (void)createLoggingEventWith:(id)arg1 postfix:(id)arg2;
+ (void)createLoggingEventWith:(id)arg1 postfix:(id)arg2 sandbox:(bool)arg3;
+ (id)sessionData;

@end
