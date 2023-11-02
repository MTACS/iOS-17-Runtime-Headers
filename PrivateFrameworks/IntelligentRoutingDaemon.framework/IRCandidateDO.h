
@interface IRCandidateDO : NSObject <NSCopying, NSSecureCoding> {
    NSString * _candidateIdentifier;
    NSDate * _lastSeenDate;
    NSDate * _lastUsedDate;
    NSSet * _nodes;
}

@property (nonatomic, readonly) NSString *candidateIdentifier;
@property (nonatomic, readonly) NSDate *lastSeenDate;
@property (nonatomic, readonly) NSDate *lastUsedDate;
@property (nonatomic, readonly) NSSet *nodes;

+ (id)candidateDOFromCandidate:(id)arg1;
+ (id)candidateDOWithLastSeenDate:(id)arg1 lastUsedDate:(id)arg2 candidateIdentifier:(id)arg3 nodes:(id)arg4;
+ (id)candidateFromCandidateDO:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)candidateIdentifier;
- (id)copyWithReplacementCandidateIdentifier:(id)arg1;
- (id)copyWithReplacementLastSeenDate:(id)arg1;
- (id)copyWithReplacementLastUsedDate:(id)arg1;
- (id)copyWithReplacementNodes:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)exportAsDictionary;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLastSeenDate:(id)arg1 lastUsedDate:(id)arg2 candidateIdentifier:(id)arg3 nodes:(id)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToCandidateDO:(id)arg1;
- (bool)isEverBeenUsedWithMediaHistoryEventsAsc:(id)arg1;
- (bool)isFirstPartyDevice;
- (bool)isMac;
- (bool)isSameICloudWithSystemState:(id)arg1;
- (bool)isSameWiFi;
- (bool)isValidForPrediction;
- (id)lastSeenDate;
- (id)lastUsedDate;
- (id)name;
- (id)nodes;

@end
