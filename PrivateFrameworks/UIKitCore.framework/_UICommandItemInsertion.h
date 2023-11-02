
@interface _UICommandItemInsertion : _UICommandChange {
    NSArray * _fallbacks;
    NSArray * _insertsAfter;
    NSArray * _insertsBefore;
}

@property (nonatomic, readonly) _UICommandIdentifier *anchor;
@property (nonatomic, readonly) NSArray *fallbacks;
@property (nonatomic, readonly) NSArray *insertsAfter;
@property (nonatomic, readonly) NSArray *insertsBefore;

+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptBoolItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)acceptItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbacks;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsBefore:(id)arg3 insertsAfter:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (id)insertsAfter;
- (id)insertsBefore;

@end
