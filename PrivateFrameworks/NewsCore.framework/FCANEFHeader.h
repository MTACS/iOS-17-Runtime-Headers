
@interface FCANEFHeader : NSObject {
    NSString * _contentType;
    NSData * _headerData;
    NSData * _wrappedKey;
    NSData * _wrappingKeyID;
}

- (void).cxx_destruct;
- (id)init;

@end
