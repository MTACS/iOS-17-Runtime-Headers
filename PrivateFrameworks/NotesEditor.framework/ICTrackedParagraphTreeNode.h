
@interface ICTrackedParagraphTreeNode : NSObject {
    bool  _checked;
    NSMutableArray * _children;
    long long  _indent;
    ICTrackedParagraphTreeNode * _parent;
    NSString * _string;
    ICTrackedParagraph * _trackedParagraph;
}

@property (nonatomic) bool checked;
@property (nonatomic, retain) NSMutableArray *children;
@property (nonatomic) long long indent;
@property (nonatomic) ICTrackedParagraphTreeNode *parent;
@property (nonatomic, readonly) NSString *recurisiveDescription;
@property (nonatomic, retain) NSString *string;
@property (nonatomic, retain) ICTrackedParagraph *trackedParagraph;

+ (id)nodeFromTrackedParagraph:(id)arg1 textView:(id)arg2;
+ (id)placeholderNodeWithIndentation:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)addChild:(id)arg1;
- (bool)checked;
- (id)children;
- (id)description;
- (long long)indent;
- (id)linerizedRepresentation;
- (id)parent;
- (id)recurisiveDescription;
- (void)recursivlyAddDescriptionToString:(id)arg1;
- (void)recursivlyAddTrackedParagraphsToArray:(id)arg1;
- (void)recursivlySortCheckedItemsToBottom;
- (void)setChecked:(bool)arg1;
- (void)setChildren:(id)arg1;
- (void)setIndent:(long long)arg1;
- (void)setParent:(id)arg1;
- (void)setString:(id)arg1;
- (void)setTrackedParagraph:(id)arg1;
- (id)string;
- (id)trackedParagraph;

@end
