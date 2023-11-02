
@interface MAAutoAssetSetInfoInstance : NSObject <NSSecureCoding> {
    NSString * _assetSetIdentifier;
    NSString * _atomicInstance;
    NSArray * _autoAssetEntries;
    NSString * _autoAssetSetClientName;
    NSString * _clientDomainName;
    long long  _clientProcessID;
    NSString * _clientProcessName;
    NSArray * _entriesWhenTargeting;
    NSUUID * _frameworkInstanceUUID;
}

@property (nonatomic, readonly, retain) NSString *assetSetIdentifier;
@property (nonatomic, readonly, retain) NSString *atomicInstance;
@property (nonatomic, readonly, retain) NSArray *autoAssetEntries;
@property (nonatomic, readonly, retain) NSString *autoAssetSetClientName;
@property (nonatomic, readonly, retain) NSString *clientDomainName;
@property (nonatomic, readonly) long long clientProcessID;
@property (nonatomic, readonly, retain) NSString *clientProcessName;
@property (nonatomic, readonly, retain) NSArray *entriesWhenTargeting;
@property (nonatomic, readonly, retain) NSUUID *frameworkInstanceUUID;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetSetIdentifier;
- (id)atomicInstance;
- (id)autoAssetEntries;
- (id)autoAssetSetClientName;
- (id)clientDomainName;
- (long long)clientProcessID;
- (id)clientProcessName;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)entriesWhenTargeting;
- (id)frameworkInstanceUUID;
- (id)initUsingClientDomain:(id)arg1 forClientName:(id)arg2 withProcessName:(id)arg3 withProcessID:(long long)arg4 forAssetSetIdentifier:(id)arg5 forAtomicInstance:(id)arg6 comprisedOfEntries:(id)arg7 asEntriesWhenTargeting:(id)arg8 associatingFrameworkUUID:(id)arg9;
- (id)initWithCoder:(id)arg1;
- (id)summary;

@end
