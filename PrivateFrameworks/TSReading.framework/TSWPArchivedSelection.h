
@interface TSWPArchivedSelection : TSPObject {
    TSWPSelection * _selection;
}

@property (nonatomic, retain) TSWPSelection *selection;

- (void)dealloc;
- (id)initWithContext:(id)arg1;
- (id)selection;
- (void)setSelection:(id)arg1;

@end
