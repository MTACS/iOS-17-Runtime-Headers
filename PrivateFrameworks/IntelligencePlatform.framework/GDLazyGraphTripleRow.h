
@interface GDLazyGraphTripleRow : NSObject <GDFusedTriple> {
    NSNumber * _confidence;
    GDLazyGraphTripleRowCursor * _cursor;
    NSString * _object;
    NSString * _predicate;
    NSString * _relationshipId;
    NSString * _relationshipPredicate;
    NSString * _sourceDuplicates;
    NSString * _sources;
    NSString * _subject;
    NSString * _subjectOverride;
    NSNumber * _timestamp;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) NSString *object;
@property (nonatomic, readonly) NSString *predicate;
@property (nonatomic, readonly) NSString *relationshipId;
@property (nonatomic, readonly) NSString *relationshipPredicate;
@property (nonatomic, readonly) NSString *sourceDuplicates;
@property (nonatomic, readonly) NSString *sources;
@property (nonatomic, readonly) NSString *subject;
@property (nonatomic, readonly) double timestamp;

- (void).cxx_destruct;
- (double)confidence;
- (id)object;
- (id)predicate;
- (id)relationshipId;
- (id)relationshipPredicate;
- (id)sourceDuplicates;
- (id)sources;
- (id)subject;
- (double)timestamp;

@end
