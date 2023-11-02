
@interface BCSLinkItemIdentifier : NSObject <BCSItemIdentifying> {
    long long  _computedTruncatedHash;
    NSString * _fullHash;
    long long  _truncatedDomainHash;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSObject *itemIdentifier;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long truncatedHash;
@property (nonatomic, readonly) long long type;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)itemIdentifier;
- (bool)matchesItemIdentifying:(id)arg1;
- (long long)truncatedHash;
- (long long)type;

@end
