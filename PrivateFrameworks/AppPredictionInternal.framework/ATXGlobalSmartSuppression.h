
@interface ATXGlobalSmartSuppression : NSObject {
    _PASCFBurstTrie * _associationScoresTrie;
}

+ (int)decodeAssociationScoreForContext:(unsigned long long)arg1 forEncodedScore:(int)arg2;
+ (int)decodeGeoAssociationScoreAtGeoHashResolution:(unsigned long long)arg1 forEncodedScore:(int)arg2;

- (void).cxx_destruct;
- (id)fetchContextualAssociationScoresForBundleId:(id)arg1;
- (id)init;

@end
