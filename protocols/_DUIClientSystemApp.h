
@protocol _DUIClientSystemApp

@required

- (oneway void)dragDidBeginWithSystemSession:(void *)arg1 info:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: <_DUIServerSessionSystemApp> *, UIDraggingSystemSessionInfo *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, UIDraggingSystemTouchRoutingPolicy *, void*
- (oneway void)dragDidEndWithSystemSession:(UIDraggingSystemSessionInfo *)arg1;

@end
