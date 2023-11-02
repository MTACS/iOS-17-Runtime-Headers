
@interface ATXTimeSinceUserWakeupDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (void)timeIntervalSinceUserWakeupWithCallback:(id /* block */)arg1;

@end
