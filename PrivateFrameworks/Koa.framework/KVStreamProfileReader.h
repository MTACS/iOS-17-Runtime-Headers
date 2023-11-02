
@interface KVStreamProfileReader : NSObject <KVProfileReader> {
    NSData * _data;
    unsigned int  _offset;
    KVProfileInfo * _profileInfo;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (bool)enumerateDatasetsWithError:(id*)arg1 usingBlock:(id /* block */)arg2;
- (id)initWithData:(id)arg1 profileInfo:(id)arg2 offset:(unsigned int)arg3;
- (id)profileInfo;

@end
