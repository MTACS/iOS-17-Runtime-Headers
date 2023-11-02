
@protocol GDFeedbackServiceXPCProtocol

@required

- (void)logFeedback:(void *)arg1 ofType:(void *)arg2 ofVariant:(void *)arg3 forEvent:(void *)arg4 withTimestamp:(void *)arg5 shouldProcessImmediately:(void *)arg6 completion:(void *)arg7; // needs 7 arg types, found 13: NSData *, NSString *, NSString *, long long, NSDate *, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
