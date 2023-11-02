
@interface MTImageDownloadClientRequest : NSObject {
    id /* block */  _completion;
    NSString * _key;
    NSString * _uniqueId;
    NSString * _url;
    NSString * _uuid;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSString *uniqueId;
@property (nonatomic, readonly) NSString *url;
@property (nonatomic, readonly) NSString *uuid;

+ (id)requestForUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(id /* block */)arg4;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)description;
- (id)initWithUrl:(id)arg1 key:(id)arg2 podcastUuid:(id)arg3 completion:(id /* block */)arg4;
- (id)key;
- (id)uniqueId;
- (id)url;
- (id)uuid;

@end
