
@interface ATXUnreadMessagesDataSource : NSObject {
    ATXHeuristicDevice * _device;
    NSObject<OS_dispatch_queue> * _resultsQueue;
}

- (void).cxx_destruct;
- (id)initWithDevice:(id)arg1;
- (void)unreadMessagesWithLimit:(long long)arg1 callback:(id /* block */)arg2;

@end
