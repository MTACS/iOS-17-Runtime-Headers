
@interface TKTokenKeychainContents : NSObject {
    TKTokenConfiguration * _configuration;
    NSArray * _items;
    NSString * _tokenID;
}

@property (readonly, copy) NSDictionary *certificates;
@property (readonly) TKTokenConfiguration *configuration;
@property (readonly, copy) NSArray *items;
@property (readonly, copy) NSDictionary *keys;
@property (readonly) NSString *tokenID;

- (void).cxx_destruct;
- (id)certificateForKey:(id)arg1;
- (id)certificateForObjectID:(id)arg1 error:(id*)arg2;
- (id)certificates;
- (id)configuration;
- (void)fillWithItems:(id)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithTokenID:(id)arg1;
- (id)items;
- (id)keyForObjectID:(id)arg1 error:(id*)arg2;
- (id)keys;
- (id)tokenID;

@end
