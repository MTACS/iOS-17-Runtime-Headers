
@interface ATXSportsClient : NSObject <ATXSportsInterface> {
    NSXPCConnection * _connection;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)requestedSchedulesForTeamsWithReply:(id /* block */)arg1;

@end
