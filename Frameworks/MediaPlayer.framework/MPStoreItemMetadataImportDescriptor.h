
@interface MPStoreItemMetadataImportDescriptor : NSObject {
    NSDictionary * _platformDictionary;
    ICUserIdentity * _userIdentity;
}

@property (nonatomic, readonly) NSDictionary *platformDictionary;
@property (nonatomic, readonly) ICUserIdentity *userIdentity;

- (void).cxx_destruct;
- (id)initWithPayload:(id)arg1 userIdentity:(id)arg2;
- (id)platformDictionary;
- (id)userIdentity;

@end
