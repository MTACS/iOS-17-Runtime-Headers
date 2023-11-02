
@protocol NSTextLayoutManagerDelegate <NSObject>

@optional

- (NSDictionary *)textLayoutManager:(NSTextLayoutManager *)arg1 renderingAttributesForLink:(id)arg2 atLocation:(id <NSTextLocation>)arg3 defaultAttributes:(NSDictionary *)arg4;
- (bool)textLayoutManager:(NSTextLayoutManager *)arg1 shouldBreakLineBeforeLocation:(id <NSTextLocation>)arg2 hyphenating:(bool)arg3;
- (NSTextContainer *)textLayoutManager:(NSTextLayoutManager *)arg1 textContainerForLocation:(id <NSTextLocation>)arg2;
- (NSTextLayoutFragment *)textLayoutManager:(NSTextLayoutManager *)arg1 textLayoutFragmentForLocation:(id <NSTextLocation>)arg2 inTextElement:(NSTextElement *)arg3;
- (NSTextViewportLayoutController *)textLayoutManager:(NSTextLayoutManager *)arg1 textViewportLayoutControllerForTextContainer:(NSTextContainer *)arg2;
- (NSArray *)textLayoutManager:(NSTextLayoutManager *)arg1 willChangeFromTextSelections:(NSArray *)arg2 toTextSelections:(NSArray *)arg3;
- (bool)textLayoutManagerAllowsSimpleRectangularTextContainerOnly:(NSTextLayoutManager *)arg1;

@end
