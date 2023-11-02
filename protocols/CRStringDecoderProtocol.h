
@protocol CRStringDecoderProtocol

@required

- (NSObject *)addedByVersionWithError:(id*)arg1;
- (void)decodeSubstring:(long long)arg1;
- (NSObject *)fromAddedByVersionWithError:(id*)arg1;
- (NSObject *)fromVersionWithError:(id*)arg1;
- (id)storageWithError:(id*)arg1;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (NSUUID *)substringAddedByReplica:(long long)arg1 withError:(id*)arg2;
- (unsigned int)substringCharClock;
- (NSUUID *)substringCharReplicaWithError:(id*)arg1;
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (long long)substringContentOptions;
- (long long)substringCount;
- (unsigned int)substringLength;
- (long long)substringRemovedAddedByCount;
- (unsigned int)substringRemovedAddedByCounter:(long long)arg1;
- (NSUUID *)substringRemovedAddedByReplica:(long long)arg1 withError:(id*)arg2;
- (NSObject *)versionWithError:(id*)arg1;

@end
