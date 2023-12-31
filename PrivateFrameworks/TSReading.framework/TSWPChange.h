
@interface TSWPChange : TSPObject <TSKDocumentObject, TSPCopying> {
    NSDate * _date;
    bool  _hidden;
    int  _kind;
    TSWPStorage * _parentStorage;
    TSWPChangeSession * _session;
}

@property (nonatomic, readonly) TSUColor *changeAdornmentsColor;
@property (nonatomic, retain) NSDate *date;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic, readonly) bool isDeletion;
@property (nonatomic, readonly) bool isInsertion;
@property (nonatomic) TSWPStorage *parentStorage;
@property (nonatomic, retain) TSWPChangeSession *session;
@property (nonatomic, readonly) bool showsHiddenDeletionMarkup;
@property (nonatomic, readonly) bool showsMarkup;
@property (nonatomic, readonly) TSUColor *textMarkupColor;

- (void)adoptStylesheet:(id)arg1 withMapper:(id)arg2;
- (bool)canMergeWithKind:(int)arg1 session:(id)arg2;
- (id)changeAdornmentsColor;
- (id)copyWithContext:(id)arg1;
- (id)date;
- (void)dealloc;
- (id)initWithContext:(id)arg1 kind:(int)arg2 session:(id)arg3;
- (bool)isDeletion;
- (bool)isFromChangeSession:(id)arg1;
- (bool)isHidden;
- (bool)isInsertion;
- (void)p_invalidateAnnotationResultsForDocumentRoot:(id)arg1;
- (id)parentStorage;
- (id)session;
- (void)setDate:(id)arg1;
- (void)setHidden:(bool)arg1;
- (void)setParentStorage:(id)arg1;
- (void)setSession:(id)arg1;
- (bool)showsHiddenDeletionMarkup;
- (bool)showsMarkup;
- (id)textMarkupColor;
- (void)trackedTextDidChange;
- (void)wasAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeAddedToDocumentRoot:(id)arg1 context:(id)arg2;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;

@end
