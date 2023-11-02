
@interface NWConcrete_nw_storage : NSObject <OS_nw_storage> {
    NSObject<OS_nw_dictionary> * canvas_cache;
    struct nw_storage_chain { 
        struct { 
            struct nw_storage_chain {} *tqe_next; 
            struct nw_storage_chain {} **tqe_prev; 
        } entry; 
    }  chain;
    struct sqlite3 { } * db;
    struct sqlite3_stmt { } * delete_stmt;
    NSObject<OS_nw_array> * flush_queue;
    unsigned int  flush_scheduled;
    struct sqlite3_stmt { } * load_stmt;
    char * path;
    NSObject<OS_nw_dictionary> * providers;
    NSObject<OS_dispatch_queue> * queue;
    struct sqlite3_stmt { } * save_stmt;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end
