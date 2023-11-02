
@interface _DKTombstoneRequirement : NSObject {
    NSString * _identifier;
}

@property (readonly) NSPredicate *eventPredicate;
@property (readonly) NSString *identifier;
@property (readonly) NSPredicate *predicate;
@property (readonly) NSArray *propertiesToFetch;

+ (id)requirement;

- (void).cxx_destruct;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromEvent:(id)arg2;
- (void)assignPropertiesToTombstone:(id)arg1 extractedFromPartialEvent:(id)arg2;
- (id)eventPredicate;
- (id)identifier;
- (id)predicate;
- (id)propertiesToFetch;

@end
