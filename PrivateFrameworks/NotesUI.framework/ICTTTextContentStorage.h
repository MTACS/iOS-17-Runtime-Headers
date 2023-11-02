
@interface ICTTTextContentStorage : NSTextContentStorage {
    ICOutlineController * _outlineController;
}

@property (nonatomic, retain) ICOutlineController *outlineController;
@property (nonatomic, readonly) ICTTTextStorage *textStorage;

- (void).cxx_destruct;
- (void)addTextLayoutManager:(id)arg1;
- (id)init;
- (id)initWithTextStorage:(id)arg1;
- (bool)isUUIDCollapsed:(id)arg1;
- (id)outlineController;
- (id)paragraphUUIDsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeTextLayoutManager:(id)arg1;
- (void)setExpanded:(bool)arg1 forSectionsInRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setOutlineController:(id)arg1;

@end
