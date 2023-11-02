
@interface ATXUpcomingMediaQuery : NSObject

+ (id)getAllUpcomingMedia;
+ (id)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(bool)arg2;
+ (void)getUpcomingMediaForBundle:(id)arg1 isInternalApplication:(bool)arg2 completionHandler:(id /* block */)arg3;

@end
