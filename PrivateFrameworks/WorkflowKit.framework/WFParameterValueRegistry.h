
@interface WFParameterValueRegistry : NSObject

// Image: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit

+ (id)allParameterValueClassesInWorkflowKit;
+ (void)createRegisteredValueClassesSet;
+ (void)initialize;
+ (void)rediscoverParameterValueClassesIfNeeded;
+ (void)registerValueClass:(Class)arg1;
+ (id)registeredValueClasses;

// Image: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit

+ (id)allParameterValueClassesInActionKit;

@end
