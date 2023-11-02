
@interface KVJSONProfileReader : NSObject <KVProfileReader> {
    NSData * _data;
    NSArray * _datasets;
    NSDictionary * _profile;
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
- (id)initWithData:(id)arg1 error:(id*)arg2;
- (id)profileInfo;

@end
