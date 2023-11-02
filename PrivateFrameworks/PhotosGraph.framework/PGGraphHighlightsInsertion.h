
@interface PGGraphHighlightsInsertion : PGGraphChange {
    NSSet * _highlightUUIDs;
    NSSet * _highlights;
}

@property (nonatomic, readonly) NSSet *highlightUUIDs;
@property (nonatomic, readonly) NSSet *highlights;

- (void).cxx_destruct;
- (unsigned long long)changeCount;
- (id)description;
- (id)highlightUUIDs;
- (id)highlights;
- (id)initWithHighlightUUIDs:(id)arg1;
- (id)initWithHighlights:(id)arg1;
- (unsigned long long)type;

@end
