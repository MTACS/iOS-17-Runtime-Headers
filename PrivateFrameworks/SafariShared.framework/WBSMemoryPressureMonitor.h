
@interface WBSMemoryPressureMonitor : NSObject {
    NSObject<OS_dispatch_source> * _memoryPressureSource;
    bool  _pressured;
}

@property bool pressured;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (bool)pressured;
- (void)setPressured:(bool)arg1;

@end
