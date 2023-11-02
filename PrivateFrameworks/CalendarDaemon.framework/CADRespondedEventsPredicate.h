
@interface CADRespondedEventsPredicate : CADPredicate <EKPredicateEvaluating, NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (id)predicate;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultPropertiesToLoad;
- (id)predicateFormat;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)ekPredicateEvaluateWithObject:(id)arg1;

@end
