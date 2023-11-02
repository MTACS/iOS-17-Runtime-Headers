
@interface IRCandidateClassificationDetectorSameSpace : NSObject

- (bool)_isSameSpaceForCandidate:(id)arg1 basedOnMiLoPrediction:(id)arg2 andHistoryEventsAsc:(id)arg3 andDate:(id)arg4;
- (id)_isSameSpaceForCandidate:(id)arg1 basedOnNearbyDevices:(id)arg2 andExpiryDate:(id)arg3 isUWB:(bool)arg4;
- (id)detectSameSpaceCandidatesFromCandidates:(id)arg1 withSystemState:(id)arg2 andHistoryEventsAsc:(id)arg3 andMiLoPredction:(id)arg4 andNearbyDevices:(id)arg5 andDate:(id)arg6;

@end
