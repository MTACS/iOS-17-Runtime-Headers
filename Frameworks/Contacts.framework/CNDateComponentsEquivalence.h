
@interface CNDateComponentsEquivalence : NSObject

+ (bool)canUnifyComponents:(id)arg1 withComponents:(id)arg2;
+ (bool)isCalendar:(id)arg1 equivalentToCalendar:(id)arg2;
+ (bool)isComponent:(long long)arg1 equivalentToComponent:(long long)arg2;

@end
