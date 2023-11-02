
@protocol GQLassoGenerator <NSObject>

@required

+ (int)beginDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)beginWorkspace:(const char *)arg1 state:(GQSDocument *)arg2;
+ (Class)beginWorkspacePage:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)endDocument:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)endWorkspace:(GQSDocument *)arg1;
+ (int)handleDrawableZOrder:(const char *)arg1 state:(GQSDocument *)arg2;
+ (int)handleStylesheet:(GQDLSDocument *)arg1 state:(GQSDocument *)arg2;
+ (int)handleWorkspaceStyle:(GQDSStyle *)arg1 state:(GQSDocument *)arg2;

@end
