
@interface COIDSMessageFactory : NSObject {
    NSString * _idsIdentifier;
    NSString * _meshName;
}

@property (nonatomic, readonly) NSString *idsIdentifier;
@property (nonatomic, readonly) NSString *meshName;

- (void).cxx_destruct;
- (id)decodeDictionary:(id)arg1 error:(id*)arg2;
- (id)encodeError:(id)arg1;
- (id)encodeRequest:(id)arg1 withIDSIdentifier:(bool)arg2;
- (id)encodeResponse:(id)arg1;
- (id)idsIdentifier;
- (id)init;
- (id)meshName;

@end
