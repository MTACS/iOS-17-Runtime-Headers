
@interface _UICommandMenuInsertion : _UICommandChange {
    NSArray * _fallbacks;
    NSArray * _insertsAfter;
    NSArray * _insertsAtEnd;
    NSArray * _insertsAtStart;
    NSArray * _insertsBefore;
}

@property (nonatomic, readonly) NSString *anchor;
@property (nonatomic, readonly) NSArray *fallbacks;
@property (nonatomic, readonly) NSArray *insertsAfter;
@property (nonatomic, readonly) NSArray *insertsAtEnd;
@property (nonatomic, readonly) NSArray *insertsAtStart;
@property (nonatomic, readonly) NSArray *insertsBefore;

+ (id)insertionWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)acceptBoolItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)acceptItemInsertionVisit:(id /* block */)arg1 itemDeletionVisit:(id /* block */)arg2 menuInsertionVisit:(id /* block */)arg3 menuDeletionVisit:(id /* block */)arg4;
- (void)encodeWithCoder:(id)arg1;
- (id)fallbacks;
- (id)initWithAnchor:(id)arg1 fallbacks:(id)arg2 insertsAtStart:(id)arg3 insertsAtEnd:(id)arg4 insertsBefore:(id)arg5 insertsAfter:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)insertsAfter;
- (id)insertsAtEnd;
- (id)insertsAtStart;
- (id)insertsBefore;

@end
