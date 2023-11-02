
@interface KVEmbeddedProfileReader : NSObject <KVProfileReader> {
    NSData * _data;
    const struct Profile { unsigned char x1[1]; } * _profile;
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
- (id)initWithData:(id)arg1 profile:(const struct Profile { unsigned char x1[1]; }*)arg2 profileInfo:(id)arg3;
- (id)profileInfo;

@end
