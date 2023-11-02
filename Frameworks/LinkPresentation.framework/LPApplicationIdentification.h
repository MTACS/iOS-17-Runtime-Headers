
@interface LPApplicationIdentification : NSObject

+ (bool)isCNNMobile;
+ (bool)isMessages;
+ (bool)isMessagesOrMessagesViewService;
+ (bool)isMessagesViewService;
+ (bool)isMobileNotes;
+ (bool)isMobileReminders;

@end
