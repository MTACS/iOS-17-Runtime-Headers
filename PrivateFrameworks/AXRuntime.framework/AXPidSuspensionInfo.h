
@interface AXPidSuspensionInfo : NSObject {
    NSMutableDictionary * _associatedRemotePidCache;
    NSMutableDictionary * _associatedRemotePids;
    NSMutableDictionary * _probationPids;
    NSMutableDictionary * _suspendsPids;
    NSMutableDictionary * _tentativeSuspendedPids;
}

+ (id)shared;

- (void).cxx_destruct;
- (id)associatedRemotePidCacheForDisplay:(int)arg1;
- (id)associatedRemotePidsForDisplay:(int)arg1;
- (id)init;
- (id)suspendedPidsForDisplay:(int)arg1;
- (id)tentativeSuspendedPidsForDisplay:(int)arg1;
- (id)timeoutProbationPidsForDisplay:(int)arg1;

@end
