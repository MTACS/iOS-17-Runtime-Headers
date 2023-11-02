
@interface WFContextualActionFilteringBehavior : NSObject <NSSecureCoding> {
    NSPredicate * _daemonPredicate;
    NSPredicate * _inClientPredicate;
    NSSet * _matchingTypes;
}

@property (nonatomic, readonly) NSPredicate *daemonPredicate;
@property (nonatomic, readonly) NSPredicate *inClientPredicate;
@property (nonatomic, readonly) NSSet *matchingTypes;

+ (id)filteringWithMatchingTypes:(id)arg1 predicate:(id)arg2;
+ (id)filteringWithMatchingTypes:(id)arg1 predicate:(id)arg2 daemonPredicate:(id)arg3;
+ (id)matchAllFiles;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)daemonPredicate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)inClientPredicate;
- (id)initWithCoder:(id)arg1;
- (id)initWithMatchingTypes:(id)arg1 inClientPredicate:(id)arg2 daemonPredicate:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)matchingTypes;

@end
