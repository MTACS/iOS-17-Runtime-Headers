
@interface BMStreamDatastoreOutOfProcessWriter : NSObject <BMStreamDatastoreWriting> {
    Class  _class;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSString * _streamIdentifier;
    unsigned int  _user;
    BMWriteService * _writeService;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithStream:(id)arg1 user:(unsigned int)arg2;
- (id)initWithStream:(id)arg1 user:(unsigned int)arg2 eventDataClass:(Class)arg3;
- (bool)isDataAccessible;
- (bool)writeEventWithEventBody:(id)arg1 timestamp:(double)arg2 outEventSize:(unsigned long long*)arg3;

@end
