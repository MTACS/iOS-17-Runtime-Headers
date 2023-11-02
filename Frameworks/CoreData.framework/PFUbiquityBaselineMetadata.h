
@interface PFUbiquityBaselineMetadata : NSObject <NSCoding, NSSecureCoding> {
    NSString * _authorPeerID;
    PFUbiquityKnowledgeVector * _kv;
    NSString * _modelVersionHash;
    PFUbiquityKnowledgeVector * _pKV;
    NSMutableDictionary * _peerRanges;
    PFUbiquityLocation * _rootLocation;
    NSString * _storeName;
}

+ (bool)supportsSecureCoding;

- (void)addDictionaryForPeerRange:(id)arg1;
- (id)createNewLocalRangeWithRangeStart:(unsigned long long)arg1 andRangeEnd:(unsigned long long)arg2 forEntityNamed:(id)arg3;
- (id)createPeerRangeDictionary:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalPeerID:(id)arg1 storeName:(id)arg2 modelVersionHash:(id)arg3 andUbiquityRootLocation:(id)arg4;
- (bool)isEqual:(id)arg1;

@end
