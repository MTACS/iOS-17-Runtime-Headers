
@interface IAMEvaluator : NSObject {
    <IAMApplicationContextProvider> * _applicationContext;
    ICInAppMessageMetadataEntry * _currentMetadata;
    ICInAppMessageMetadataEntry * _currentProximityMetadata;
    NSString * _hostBundleIdentifier;
    NSDate * _lastDisplayTimeForNormalPresentationPolicyGroup;
    NSDate * _lastDisplayTimeForRestrictedPresentationPolicyGroup;
    NSArray * _messageEntries;
    NSDictionary * _messageGroupsByGroupIdentifier;
    NSArray * _messagesCloseToPassing;
    NSDictionary * _metadataEntries;
    NSArray * _passingMessageEntries;
}

@property (retain) NSArray *messagesCloseToPassing;
@property (retain) NSArray *passingMessageEntries;

+ (long long)_compareCurrentTimeWithMessageTime:(double)arg1;
+ (bool)_isMessageWithinDateRange:(id)arg1;
+ (bool)applicationContext:(id)arg1 allowsPresentationForPolicyGroup:(long long)arg2 withLastDisplayTime:(id)arg3;

- (void).cxx_destruct;
- (unsigned long long)_calculateCompoundRuleProximity:(id)arg1 forMessageEntry:(id)arg2;
- (unsigned long long)_calculateConditionProximity:(id)arg1 forMessageEntry:(id)arg2;
- (unsigned long long)_calculateRuleProximity:(id)arg1 forMessageEntry:(id)arg2;
- (id)_contextPropertyWithName:(id)arg1 forMessageGroupIdentifier:(id)arg2;
- (id)_contextPropertyWithName:(id)arg1 messageBundleIdentifier:(id)arg2 conditionBundleIdentifier:(id)arg3;
- (bool)_didCacheResourcesForMessageIfRequired:(id)arg1;
- (bool)_doesPresentationPolicyAllowPresentationOfMessage:(id)arg1;
- (bool)_evaluateCompoundRule:(id)arg1 forMessageEntry:(id)arg2;
- (bool)_evaluateCondition:(id)arg1 forMessageEntry:(id)arg2;
- (bool)_evaluateRule:(id)arg1 forMessageEntry:(id)arg2;
- (unsigned long long)_messageEntryProximity:(id)arg1;
- (id)_valueForCondition:(id)arg1 messageBundleIdentifier:(id)arg2 messageMetadata:(id)arg3;
- (id)computeMessagesCloseToPassingWithProximityThreshold:(unsigned long long)arg1;
- (id)computePassingMessageEntries;
- (id)initWithMessageEntries:(id)arg1 metadataEntries:(id)arg2 applicationContext:(id)arg3 hostBundleIdentifier:(id)arg4 messageGroups:(id)arg5 lastDisplayTimeForRestrictedPresentationPolicyGroup:(id)arg6 lastDisplayTimeForNormalPresentationPolicyGroup:(id)arg7;
- (id)messagesCloseToPassing;
- (id)passingMessageEntries;
- (void)setMessagesCloseToPassing:(id)arg1;
- (void)setPassingMessageEntries:(id)arg1;

@end
