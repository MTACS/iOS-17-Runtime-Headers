
@interface ATXAlarmsDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (void)alarmsFromDate:(id)arg1 toDate:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)initWithDevice:(id)arg1;

@end
