
@interface PGGraphHighlightsDeletion : PGGraphChange {
    NSSet * _highlightUUIDs;
}

@property (nonatomic, readonly) NSSet *highlightUUIDs;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)highlightUUIDs;
- (id)initWithHighlightUUIDs:(id)arg1;
- (unsigned long long)type;

@end
