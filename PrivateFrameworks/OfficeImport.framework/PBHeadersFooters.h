
@interface PBHeadersFooters : NSObject

+ (void)addCopyOfHeaderFooterPlaceholderOfType:(int)arg1 toDrawables:(id)arg2 slideBase:(id)arg3 headersFootersContainer:(id)arg4 state:(id)arg5;
+ (struct PptHeadersFootersAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; bool x6; int x7; bool x8; bool x9; bool x10; bool x11; bool x12; bool x13; }*)headersFootersAtomWithHeadersFootersContainer:(id)arg1;
+ (id)headersFootersContainerWithSlideContainer:(id)arg1 state:(id)arg2;
+ (void)readHeaderFooterTextFromHeadersFootersContainer:(id)arg1 toPlaceholderShape:(id)arg2;
+ (void)readHeadersFootersFromSlideContainer:(id)arg1 toMasterSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4;
+ (void)readHeadersFootersFromSlideContainer:(id)arg1 toSlide:(id)arg2 drawables:(id)arg3 state:(id)arg4;
+ (void)readHeadersFootersToSlideLayout:(id)arg1 drawables:(id)arg2 state:(id)arg3;

@end
