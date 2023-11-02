
@interface BRCTapToRadarManager : NSObject {
    NSObject<OS_dispatch_queue> * _executionQueue;
}

- (void).cxx_destruct;
- (id)init;
- (void)requestTapToRadarWithTitle:(id)arg1 description:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(long long)arg5 keywords:(id)arg6 attachments:(id)arg7 sendFullLog:(bool)arg8 displayReason:(id)arg9;
- (void)requestTapToRadarWithTitle:(id)arg1 description:(id)arg2 componentName:(id)arg3 componentVersion:(id)arg4 componentID:(long long)arg5 keywords:(id)arg6 attachments:(id)arg7 sendFullLog:(bool)arg8 displayReason:(id)arg9 completionHandler:(id /* block */)arg10;
- (void)requestTapToRadarWithTitle:(id)arg1 description:(id)arg2 keywords:(id)arg3 attachments:(id)arg4 sendFullLog:(bool)arg5 displayReason:(id)arg6;
- (void)requestTapToRadarWithTitle:(id)arg1 description:(id)arg2 keywords:(id)arg3 attachments:(id)arg4 sendFullLog:(bool)arg5 displayReason:(id)arg6 completionHandler:(id /* block */)arg7;

@end
