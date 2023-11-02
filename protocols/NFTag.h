
@protocol NFTag <NSObject>

@required

- (NSData *)AppData;
- (NSData *)UID;
- (NSString *)description;
- (id)initWithNFTag:(id <NFTag>)arg1;
- (bool)isEqualToNFTag:(id <NFTag>)arg1;
- (unsigned int)ndefAvailability;
- (unsigned long long)ndefContainerSize;
- (unsigned long long)ndefMessageSize;
- (<NFTagA> *)tagA;
- (<NFTagB> *)tagB;
- (<NFTagF> *)tagF;
- (NSData *)tagID;
- (unsigned int)technology;
- (unsigned int)type;

@end
