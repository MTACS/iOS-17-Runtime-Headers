
@protocol GDFusedTriple

@required

- (double)confidence;
- (NSString *)object;
- (NSString *)predicate;
- (NSString *)relationshipId;
- (NSString *)relationshipPredicate;
- (NSString *)sourceDuplicates;
- (NSString *)sources;
- (NSString *)subject;
- (double)timestamp;

@end
