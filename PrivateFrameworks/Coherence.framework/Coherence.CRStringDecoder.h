
@interface Coherence.CRStringDecoder : NSObject <CRStringDecoderProtocol> {
    void decoder;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  encoded;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  subsequence;
}

- (void).cxx_destruct;
- (id)addedByVersionWithError:(id*)arg1;
- (void)decodeSubstring:(long long)arg1;
- (id)fromAddedByVersionWithError:(id*)arg1;
- (id)fromVersionWithError:(id*)arg1;
- (id)init;
- (id)storageWithError:(id*)arg1;
- (long long)substringAddedByCount;
- (unsigned int)substringAddedByCounter:(long long)arg1;
- (id)substringAddedByReplica:(long long)arg1 withError:(id*)arg2;
- (unsigned int)substringCharClock;
- (id)substringCharReplicaWithError:(id*)arg1;
- (unsigned int)substringChild:(long long)arg1;
- (long long)substringChildCount;
- (long long)substringContentOptions;
- (long long)substringCount;
- (unsigned int)substringLength;
- (long long)substringRemovedAddedByCount;
- (unsigned int)substringRemovedAddedByCounter:(long long)arg1;
- (id)substringRemovedAddedByReplica:(long long)arg1 withError:(id*)arg2;
- (id)versionWithError:(id*)arg1;

@end
