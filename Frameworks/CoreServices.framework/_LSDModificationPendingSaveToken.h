
@interface _LSDModificationPendingSaveToken : NSObject <_LSPendingSaveToken> {
    struct unfair_lock_mutex { 
        unsigned int _os_unfair_lock_opaque; 
    }  _mutex;
    struct optional<NSError *> { 
        union { 
            BOOL __null_state_; 
            id __val_; 
            /* Warning: Unrecognized filer type: ')' using 'void*' */ void*NSError; 
            bool __engaged_; 
        } ; 
    }  _saveError;
    NSUUID * _uuid;
    NSMutableArray * _waiters;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithUUID:(id)arg1;
- (void)saveDidHappen:(bool)arg1 error:(id)arg2;
- (void)waitForResult:(id /* block */)arg1;

@end
