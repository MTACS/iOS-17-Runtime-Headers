
@protocol DockKitCore.XPCDataStreamClientProtocol

@required

- (void)accessoryDescriptionFeedbackWithProcessID:(int)arg1 info:(_TtC11DockKitCore12DockCoreInfo *)arg2 accessoryDescription:(NSString *)arg3 err:(NSError *)arg4;
- (void)diagnosticsFeedbackWithProcessID:(int)arg1 info:(_TtC11DockKitCore12DockCoreInfo *)arg2 path:(NSString *)arg3 err:(NSError *)arg4;
- (void)fwUpdateFeedbackWithProcessID:(int)arg1 info:(_TtC11DockKitCore12DockCoreInfo *)arg2 message:(NSString *)arg3 complete:(bool)arg4 err:(NSError *)arg5;
- (void)haltFeedbackWithProcessID:(int)arg1 info:(_TtC11DockKitCore12DockCoreInfo *)arg2 success:(bool)arg3 complete:(bool)arg4 err:(NSError *)arg5;
- (void)rebootFeedbackWithProcessID:(int)arg1 info:(_TtC11DockKitCore12DockCoreInfo *)arg2 success:(bool)arg3 complete:(bool)arg4 err:(NSError *)arg5;

@end
