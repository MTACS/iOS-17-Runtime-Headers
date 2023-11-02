
@interface ACNotifyWriter : NSObject <ACNotifyWriting> {
    NSString * _key;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  lock;
    int  notifierToken;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSString *key;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithKey:(id)arg1;
- (id)key;
- (void)setKey:(id)arg1;
- (void)write:(unsigned long long)arg1;

@end
