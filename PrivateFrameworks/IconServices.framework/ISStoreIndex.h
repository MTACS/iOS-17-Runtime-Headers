
@interface ISStoreIndex : NSObject {
    NSData * _data;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _dataLock;
    NSData * _entryData;
    NSURL * _indexFileURL;
}

@property (readonly) NSData *data;
@property (readonly) struct os_unfair_lock_s { unsigned int x1; }*dataLock;
@property (readonly) NSURL *indexFileURL;

- (void).cxx_destruct;
- (id)_internalData;
- (void)_internalSetData:(id)arg1;
- (id)data;
- (struct os_unfair_lock_s { unsigned int x1; }*)dataLock;
- (id)description;
- (void)enumerateValuesForUUID:(unsigned char)arg1 bock:(id /* block */)arg2;
- (void)enumerateValuesWithBock:(id /* block */)arg1;
- (id)indexFileURL;
- (id)initWithStoreFileURL:(id)arg1;
- (void)invalidate;
- (bool)validate;

@end
