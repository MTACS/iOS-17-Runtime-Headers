
@interface CollationCore : NSObject {
    NSMutableSet * _coll_elems;
    unsigned int  _coll_uid;
    NSObject<OS_dispatch_queue> * _dq;
    NSObject<OS_xpc_object> * _listener;
    NSObject<OS_os_log> * _log;
    NSMutableArray * _peer_array;
}

@property (nonatomic, retain) NSMutableSet *coll_elems;
@property (nonatomic) unsigned int coll_uid;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dq;
@property (nonatomic, retain) NSObject<OS_xpc_object> *listener;
@property (nonatomic, retain) NSObject<OS_os_log> *log;
@property (nonatomic, retain) NSMutableArray *peer_array;

- (void).cxx_destruct;
- (bool)appendCollationElement:(id)arg1;
- (id)coll_elems;
- (unsigned int)coll_uid;
- (id)createEndpoint;
- (id)description;
- (id)dq;
- (void)enumerateCollationElements:(id /* block */)arg1;
- (void)enumerateElements:(id /* block */)arg1;
- (unsigned int)getID;
- (id)getValidPaths:(id)arg1 forBundleID:(id)arg2;
- (id)initWithID:(unsigned int)arg1;
- (id)initWithXPC:(id)arg1;
- (bool)isEmpty;
- (id)listener;
- (id)log;
- (id)mountPointOfBundleID:(id)arg1;
- (id)packToXPC;
- (void)parseMessage:(id)arg1;
- (id)peer_array;
- (bool)removeCollationElementWithPath:(id)arg1;
- (void)setColl_elems:(id)arg1;
- (void)setColl_uid:(unsigned int)arg1;
- (void)setDq:(id)arg1;
- (void)setListener:(id)arg1;
- (void)setLog:(id)arg1;
- (void)setPeer_array:(id)arg1;
- (void)setupHandler;

@end
