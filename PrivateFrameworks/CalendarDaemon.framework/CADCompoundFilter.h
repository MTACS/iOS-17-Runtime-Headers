
@interface CADCompoundFilter : CADFilter {
    NSArray * _filters;
    long long  _operation;
}

@property (nonatomic, readonly) NSArray *filters;
@property (nonatomic, readonly) long long operation;

// Image: /System/Library/PrivateFrameworks/CalendarDaemon.framework/CalendarDaemon

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)applicableToEntityType:(int)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extendWhereClause:(id)arg1 usingOperation:(long long)arg2 withValues:(id)arg3 andTypes:(id)arg4;
- (id)filters;
- (id)initWithCoder:(id)arg1;
- (id)initWithFilters:(id)arg1 operation:(long long)arg2;
- (long long)operation;
- (bool)validate;

// Image: /System/Library/Frameworks/EventKit.framework/EventKit

- (bool)ekPredicateFilterMatches:(id)arg1;

@end