
@interface ATXDuetInteractionDataSource : NSObject {
    ATXHeuristicDevice * _device;
}

- (void).cxx_destruct;
- (void)duetInteractionCountForHandles:(id)arg1 sinceDate:(id)arg2 callback:(id /* block */)arg3;
- (id)initWithDevice:(id)arg1;

@end
