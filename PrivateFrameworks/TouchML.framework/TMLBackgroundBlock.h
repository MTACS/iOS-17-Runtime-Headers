
@interface TMLBackgroundBlock : NSObject

+ (id)executeFunction:(id)arg1 argument:(id)arg2;
+ (void)handleException:(id)arg1;
+ (void)initializeJSContext:(id)arg1;
+ (id)sharedVM;

@end
