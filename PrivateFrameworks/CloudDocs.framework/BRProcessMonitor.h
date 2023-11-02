
@interface BRProcessMonitor : NSObject {
    id  _monitor;
}

- (void).cxx_destruct;
- (id)_bundleIDForPID:(int)arg1;
- (bool)_isProcessForeground:(id)arg1 bundleID:(id)arg2;
- (void)dealloc;
- (id)initForProcessID:(int)arg1 observer:(id)arg2;
- (void)invalidate;

@end
