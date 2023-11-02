
@interface PFUbiquityKnowledgeVector : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    unsigned long long  _hash;
    NSDictionary * _kv;
    NSDictionary * _storeKVDict;
}

@property (nonatomic, readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long length;

+ (id)createKnowledgeVectorDictionaryFromString:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)_updateHash;
- (long long)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)createSetOfAllPeerIDsWithOtherVector:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKnowledgeVectorDictionary:(id)arg1;
- (id)initWithKnowledgeVectorString:(id)arg1;
- (id)initWithStoreKnowledgeVectorDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned long long)length;

@end
