
@interface HKConceptSelection : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)andSelectionWithSubselections:(id)arg1;
+ (id)notSelectionWithSubselections:(id)arg1;
+ (id)orSelectionWithSubselections:(id)arg1;
+ (id)selectionForAllNodes;
+ (id)selectionForNoNodes;
+ (id)selectionForNodeWithIdentifier:(id)arg1;
+ (id)selectionForNodesWithAttribute:(long long)arg1 likeStringValue:(id)arg2;
+ (id)selectionForNodesWithAttribute:(long long)arg1 stringValue:(id)arg2;
+ (id)selectionForNodesWithAttribute:(long long)arg1 value:(id)arg2;
+ (id)selectionForNodesWithCoding:(id)arg1;
+ (id)selectionForObjectsWithRelationship:(long long)arg1 fromSubjectSelection:(id)arg2;
+ (id)selectionForObjectsWithRelationshipFromSubjectSelection:(id)arg1;
+ (id)selectionForSubjectsWithRelationship:(long long)arg1 toObjectSelection:(id)arg2;
+ (id)selectionForSubjectsWithRelationshipToObjectSelection:(id)arg1;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

- (id)predicateWithProfile:(id)arg1;

@end
