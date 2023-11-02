
@interface IRRuleCandidate : IRRule {
    NSString * _attributeKey;
    bool  _requireAllNodes;
}

@property (nonatomic, retain) NSString *attributeKey;
@property (nonatomic) bool requireAllNodes;

- (void).cxx_destruct;
- (id)_activeRouteForCandidate:(id)arg1 systemState:(id)arg2;
- (id)_appleTVControlUserRejectedInLastDayWithoutPickerChoiceForCandidate:(id)arg1 prerequisite:(id)arg2;
- (id)_attributeValueForAttributeKey:(id)arg1 prerequisite:(id)arg2 withCandidate:(id)arg3 nearbyDeviceContainer:(id)arg4 systemState:(id)arg5 date:(id)arg6;
- (bool)_isCandidateIdentifier:(id)arg1 inHistory:(id)arg2;
- (bool)_isLastEventForCandidate:(id)arg1 inPrerequisite:(id)arg2 isOneOf:(id)arg3;
- (id)_matchedDevicefromNode:(id)arg1 withNearbyDeviceContainer:(id)arg2 measurementExpiry:(id)arg3 isUwb:(bool)arg4;
- (id)_mediaUserRejectedInLastDayWithoutPickerChoiceForCandidate:(id)arg1 prerequisite:(id)arg2;
- (id)_prerequisiteValueForAttributeKey:(id)arg1 withCandidatesContainer:(id)arg2 nearbyDeviceContainer:(id)arg3 systemState:(id)arg4 historyContainer:(id)arg5 date:(id)arg6;
- (bool)_proximityBLEValueForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 date:(id)arg3;
- (bool)_proximityDecisionForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 date:(id)arg3;
- (id)_proximityLowestUwbRangeForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 date:(id)arg3;
- (id)_proximityPrerequisiteValueForCandidatesContainer:(id)arg1 withNearbyDeviceContainer:(id)arg2 date:(id)arg3;
- (id)_proximityShortestRangeInHistoryOrSameICloudValueForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 prerequisite:(id)arg3 date:(id)arg4;
- (id)_proximityShortestRangeValueForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 prerequisite:(id)arg3 date:(id)arg4;
- (id)_proximityValueForCandidate:(id)arg1 withNearbyDeviceContainer:(id)arg2 prerequisite:(id)arg3 date:(id)arg4;
- (id)_sameIcloudForCandidate:(id)arg1 systemState:(id)arg2;
- (id)_sameWiFiForCandidate:(id)arg1 systemState:(id)arg2;
- (id)_shortestRangeProximityPrerequisiteValueForCandidatesContainer:(id)arg1 withNearbyDeviceContainer:(id)arg2 date:(id)arg3;
- (id)_shortestRangeWithHistoryOrSameICloudProximityPrerequisiteValueForCandidatesContainer:(id)arg1 withNearbyDeviceContainer:(id)arg2 historyContainer:(id)arg3 systemState:(id)arg4 date:(id)arg5;
- (id)_userRejectedInLastDayWithoutPickerChoicePrerequisiteValueForHistoryContainer:(id)arg1 systemState:(id)arg2 date:(id)arg3;
- (id)_valueFromValues:(id)arg1;
- (id)attributeKey;
- (id)executeRuleWithCandiatesContainer:(id)arg1 systemStatus:(id)arg2 historyContainer:(id)arg3 miloPrediction:(id)arg4 nearbyDeviceContainer:(id)arg5 date:(id)arg6;
- (id)initWithAttributeKey:(id)arg1 requireAllNodes:(bool)arg2;
- (bool)requireAllNodes;
- (void)setAttributeKey:(id)arg1;
- (void)setRequireAllNodes:(bool)arg1;

@end
