
@interface CAReportingPerformanceObject : NSObject {
    NSDictionary * _configuration;
    NSString * _hostApplicationDisplayID;
    NSDictionary * _performanceMetrics;
    NSMutableArray * _processIdentifiers;
    unsigned short  _serviceType;
    struct vector<pc_session *, std::allocator<pc_session *>> { 
        struct pc_session {} **__begin_; 
        struct pc_session {} **__end_; 
        struct __compressed_pair<pc_session **, std::allocator<pc_session *>> { 
            struct pc_session {} **__value_; 
        } __end_cap_; 
    }  _sessions;
    NSLock * _sessionsLock;
}

@property (nonatomic, retain) NSDictionary *configuration;
@property (nonatomic, retain) NSString *hostApplicationDisplayID;
@property (nonatomic, readonly) NSDictionary *performanceMetrics;
@property (nonatomic, retain) NSMutableArray *processIdentifiers;
@property (nonatomic) unsigned short serviceType;
@property (nonatomic) void*sessions;
@property (nonatomic, retain) NSLock *sessionsLock;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abandon;
- (void)begin;
- (id)configuration;
- (id)endAndReturnPerformanceMetrics;
- (id)hostApplicationDisplayID;
- (id)initWithProcessIdentifiers:(id)arg1;
- (id)performanceMetrics;
- (id)processIdentifiers;
- (unsigned short)serviceType;
- (void*)sessions;
- (id)sessionsLock;
- (void)setConfiguration:(id)arg1;
- (void)setHostApplicationDisplayID:(id)arg1;
- (void)setProcessIdentifiers:(id)arg1;
- (void)setServiceType:(unsigned short)arg1;
- (void)setSessions:(void*)arg1;
- (void)setSessionsLock:(id)arg1;

@end
