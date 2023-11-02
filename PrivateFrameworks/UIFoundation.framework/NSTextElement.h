
@interface NSTextElement : NSObject {
    unsigned char  _coalescingType;
    NSTextRange * _elementRange;
    NSTextContentManager * _textContentManager;
}

@property (readonly, copy) NSArray *childElements;
@property unsigned char coalescingType;
@property (retain) NSTextRange *elementRange;
@property (readonly) bool isBeginningOfDocument;
@property (readonly) bool isEndOfDocument;
@property (readonly) bool isRepresentedElement;
@property (readonly) NSTextElement *parentElement;
@property NSTextContentManager *textContentManager;

+ (long long)_searchElements:(id)arg1 forLocation:(id)arg2;

- (id)_firstRepresentableChildElement;
- (id)childElements;
- (id)childTextElementForLocation:(id)arg1 elementIndex:(out long long*)arg2;
- (unsigned char)coalescingType;
- (void)dealloc;
- (id)elementRange;
- (struct CGSize { double x1; double x2; })estimatedIntrinsicContentSizeForTextLayoutManager:(id)arg1;
- (id)init;
- (id)initWithTextContentManager:(id)arg1;
- (bool)isBeginningOfDocument;
- (bool)isEndOfDocument;
- (bool)isRepresentedElement;
- (id)parentElement;
- (void)setCoalescingType:(unsigned char)arg1;
- (void)setElementRange:(id)arg1;
- (void)setTextContentManager:(id)arg1;
- (id)textContentManager;

@end
