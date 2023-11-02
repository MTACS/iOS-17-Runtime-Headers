
@interface VCPMergeCandidatePair : NSObject {
    unsigned long long  _hash;
    NSString * _person1LocalIdentifier;
    NSString * _person2LocalIdentifier;
    NSString * _reason;
}

@property (readonly) NSString *person1LocalIdentifier;
@property (readonly) NSString *person2LocalIdentifier;
@property (readonly) NSString *reason;

+ (id)mergeCandidatePairWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithPerson:(id)arg1 andPerson:(id)arg2 reason:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)person1LocalIdentifier;
- (id)person2LocalIdentifier;
- (id)reason;

@end