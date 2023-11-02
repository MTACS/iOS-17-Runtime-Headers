
@interface SiriCoreNWContext : NSObject {
    NSObject<OS_nw_context> * _context;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_init;
- (id)init;
- (id)nwContext;

@end
