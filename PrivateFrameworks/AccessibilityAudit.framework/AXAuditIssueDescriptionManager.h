
@interface AXAuditIssueDescriptionManager : NSObject

+ (id)_auditIssueTypeToLocalizationKeyLookup;
+ (id)allAuditIssueClassificationCodes;
+ (id)auditIssueTypeToAuditTestTypeMapping;
+ (id)sharedManager;

- (id)_locKeyForAuditIssueClassification:(long long)arg1;
- (id)_locKeyWithSuffix:(id)arg1 issueClassification:(long long)arg2;
- (id)_locStringForIssue:(id)arg1 suffix:(id)arg2;
- (id)_locStringForKey:(id)arg1;
- (id)humanReadableDescriptionForAuditIssueTestType:(id)arg1;
- (id)humanReadableDescriptionForAuditTestType:(id)arg1;
- (bool)isContrastTypeIssue:(long long)arg1;
- (id)longDescExtraInfoForAuditIssue:(id)arg1;
- (id)longDescriptionForAuditIssue:(id)arg1;
- (id)shortTitleForAuditIssue:(id)arg1;
- (id)suggestionDescriptionForAuditIssue:(id)arg1;

@end
