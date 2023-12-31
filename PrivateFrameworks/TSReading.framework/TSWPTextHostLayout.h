
@interface TSWPTextHostLayout : TSDDrawableLayout <TSWPTextEditingHostLayout> {
    TSWPShapeInfo * _editingShapeInfo;
    TSWPShapeLayout * _editingShapeLayout;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TSWPShapeInfo *editingShape;
@property (nonatomic, readonly) TSWPShapeLayout *editingShapeLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)dealloc;
- (id)editingShape;
- (id)editingShapeLayout;
- (void)setEditingShape:(id)arg1;
- (void)updateChildrenFromInfo;

@end
