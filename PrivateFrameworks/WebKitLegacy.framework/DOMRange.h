
@interface DOMRange : DOMObject

@property (readonly) bool collapsed;
@property (readonly) DOMNode *commonAncestorContainer;
@property (readonly) DOMNode *endContainer;
@property (readonly) int endOffset;
@property (nonatomic, readonly, copy) NSString *markupString;
@property (readonly) DOMNode *startContainer;
@property (readonly) int startOffset;
@property (readonly, copy) NSString *text;
@property (nonatomic, readonly) WebArchive *webArchive;

+ (id)rangeForFirstPosition:(id)arg1 second:(id)arg2;

- (id)_text;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })boundingBox;
- (id)cloneContents;
- (id)cloneRange;
- (void)collapse:(bool)arg1;
- (bool)collapsed;
- (id)commonAncestorContainer;
- (short)compareBoundaryPoints:(unsigned short)arg1 :(id)arg2;
- (short)compareBoundaryPoints:(unsigned short)arg1 sourceRange:(id)arg2;
- (short)compareNode:(id)arg1;
- (short)comparePoint:(id)arg1 offset:(int)arg2;
- (id)createContextualFragment:(id)arg1;
- (void)dealloc;
- (void)deleteContents;
- (id)description;
- (void)detach;
- (id)enclosingWordRange;
- (id)endContainer;
- (int)endOffset;
- (id)endPosition;
- (void)expand:(id)arg1;
- (void)extend:(unsigned int)arg1 inDirection:(int)arg2;
- (id)extractContents;
- (id)firstNode;
- (void)insertNode:(id)arg1;
- (bool)intersectsNode:(id)arg1;
- (bool)isPointInRange:(id)arg1 offset:(int)arg2;
- (id)lineBoxRects;
- (id)markupString;
- (void)move:(unsigned int)arg1 inDirection:(int)arg2;
- (struct CGImage { }*)renderedImageForcingBlackText:(bool)arg1;
- (void)selectNode:(id)arg1;
- (void)selectNodeContents:(id)arg1;
- (void)setEnd:(id)arg1 :(int)arg2;
- (void)setEnd:(id)arg1 offset:(int)arg2;
- (void)setEndAfter:(id)arg1;
- (void)setEndBefore:(id)arg1;
- (void)setStart:(id)arg1 :(int)arg2;
- (void)setStart:(id)arg1 offset:(int)arg2;
- (void)setStartAfter:(id)arg1;
- (void)setStartBefore:(id)arg1;
- (id)startContainer;
- (int)startOffset;
- (id)startPosition;
- (void)surroundContents:(id)arg1;
- (id)text;
- (id)textRects;
- (id)toString;
- (id)webArchive;

@end
