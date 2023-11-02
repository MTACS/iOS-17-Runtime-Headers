
@interface CUKeyValueStoreWriter : NSObject {
    struct cdb_make { 
        BOOL bspace[8192]; 
        BOOL final[2048]; 
        unsigned int count[256]; 
        unsigned int start[256]; 
        struct cdb_hplist {} *head; 
        struct cdb_hp {} *split; 
        struct cdb_hp {} *hash; 
        unsigned int numentries; 
        struct buffer { 
            char *x; 
            unsigned int p; 
            unsigned int n; 
            int fd; 
            int (*op)(); 
        } b; 
        unsigned int pos; 
        int fd; 
    }  _cdb;
    bool  _cdbStarted;
    NSString * _finalPath;
    int  _tempFD;
    BOOL  _tempPath;
}

- (void).cxx_destruct;
- (bool)addKey:(id)arg1 value:(id)arg2 error:(id*)arg3;
- (void)cancel;
- (void)dealloc;
- (bool)finishAndReturnError:(id*)arg1;
- (id)init;
- (bool)startAtPath:(id)arg1 error:(id*)arg2;

@end
