
@interface _SYInputDataItem : NSObject {
    id /* block */  _callback;
    NSMutableData * _data;
    unsigned long long  _length;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
}

@property (nonatomic, copy) id /* block */ callback;
@property (nonatomic, readonly) NSMutableData *data;
@property (nonatomic) unsigned long long length;
@property (nonatomic, readonly) unsigned long long lengthRemaining;
@property (nonatomic) struct os_unfair_lock_s { unsigned int x1; } lock;

- (void).cxx_destruct;
- (id /* block */)callback;
- (id)data;
- (id)initWithLength:(unsigned long long)arg1 callback:(id /* block */)arg2;
- (unsigned long long)length;
- (unsigned long long)lengthRemaining;
- (struct os_unfair_lock_s { unsigned int x1; })lock;
- (void)setCallback:(id /* block */)arg1;
- (void)setLength:(unsigned long long)arg1;
- (void)setLock:(struct os_unfair_lock_s { unsigned int x1; })arg1;

@end
