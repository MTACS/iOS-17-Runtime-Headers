
@interface Collation : NSObject {
    CollationCore * _ccore;
    NSObject<OS_xpc_object> * _client_con;
    NSString * _coll_description;
    NSObject<OS_dispatch_queue> * _dq;
    NSObject<OS_xpc_object> * _endpoint;
    NSObject<OS_os_log> * _log;
}

@property (nonatomic, retain) CollationCore *ccore;
@property (nonatomic, retain) NSObject<OS_xpc_object> *client_con;
@property (nonatomic, retain) NSString *coll_description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic, retain) NSObject<OS_xpc_object> *endpoint;
@property (nonatomic, retain) NSObject<OS_os_log> *log;

- (void).cxx_destruct;
- (id)ccore;
- (id)client_con;
- (id)coll_description;
- (id)dq;
- (id)endpoint;
- (id)getValidPaths:(id)arg1 forLabels:(id)arg2;
- (id)init;
- (id)initForUser:(unsigned int)arg1;
- (id)log;
- (id)mountPointOfBundleID:(id)arg1;
- (struct __CFDictionary { }*)package;
- (void)setCcore:(id)arg1;
- (void)setClient_con:(id)arg1;
- (void)setColl_description:(id)arg1;
- (void)setDq:(id)arg1;
- (void)setEndpoint:(id)arg1;
- (void)setLog:(id)arg1;

@end
