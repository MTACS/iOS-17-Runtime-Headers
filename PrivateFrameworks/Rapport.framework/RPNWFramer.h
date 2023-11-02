
@interface RPNWFramer : NSObject

+ (const char *)controlCodeToString:(int)arg1;
+ (void)setupDaemonFramer:(id)arg1 receiveHandler:(id /* block */)arg2 closeHandler:(id /* block */)arg3;
+ (void)startConnection:(id)arg1;
+ (bool)writeControlOnFramer:(id)arg1 type:(int)arg2 error:(unsigned char)arg3;
+ (bool)writeDataOnFramer:(id)arg1 data:(id)arg2;
+ (void)writeErrorOnFramer:(id)arg1 error:(unsigned char)arg2;

@end
