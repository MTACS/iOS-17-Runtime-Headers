
@interface LAAuthorizationError : NSObject

+ (id)genericErrorWithMessage:(id)arg1;
+ (id)genericErrorWithStatus:(int)arg1;
+ (bool)isResourceNotFoundError:(id)arg1;
+ (id)missingImplementation;
+ (id)resourceNotFound;
+ (id)resourceNotFoundWithMessage:(id)arg1;
+ (id)resourceNotFoundWithUnderylingError:(id)arg1;

@end
