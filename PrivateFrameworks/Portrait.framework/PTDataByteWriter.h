
@interface PTDataByteWriter : NSObject <PTByteWriter> {
    NSMutableData * _data;
    NSError * _error;
}

@property (retain) NSMutableData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_errorForSize:(unsigned long long)arg1 offset:(unsigned long long)arg2;
- (bool)appendBytes:(const void*)arg1 size:(unsigned long long)arg2;
- (id)data;
- (id)error;
- (id)initWithMutableData:(id)arg1;
- (void)setData:(id)arg1;
- (void)setError:(id)arg1;
- (bool)writeBytes:(const void*)arg1 size:(unsigned long long)arg2 offset:(unsigned long long)arg3;

@end
