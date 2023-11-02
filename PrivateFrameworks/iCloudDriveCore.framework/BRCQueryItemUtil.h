
@interface BRCQueryItemUtil : NSObject {
    bool  _isMacOS;
}

+ (id)sharedQueryItemUtil;

- (long long)contentPolicyForRootContainerWithOptimizeStorage:(bool)arg1 isDataSeparated:(bool)arg2;
- (long long)contentPolicyForZoneRoot:(bool)arg1 isAppInstalled:(bool)arg2 isWallet:(bool)arg3 isGreedyDocument:(bool)arg4;
- (id)initWithMacOS:(bool)arg1;

@end
