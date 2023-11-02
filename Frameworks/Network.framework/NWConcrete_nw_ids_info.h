
@interface NWConcrete_nw_ids_info : NSObject <OS_nw_ids_info> {
    char * pseudonym;
    char * push_token;
    char * session_id;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)description;
- (id)initWithSessionId:(const char *)arg1 pseudonym:(const char *)arg2 pushToken:(const char *)arg3;

@end
