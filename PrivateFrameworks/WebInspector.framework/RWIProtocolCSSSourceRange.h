
@interface RWIProtocolCSSSourceRange : RWIProtocolJSONObject

@property (nonatomic) int endColumn;
@property (nonatomic) int endLine;
@property (nonatomic) int startColumn;
@property (nonatomic) int startLine;

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (int)endColumn;
- (int)endLine;
- (id)initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;
- (void)setEndColumn:(int)arg1;
- (void)setEndLine:(int)arg1;
- (void)setStartColumn:(int)arg1;
- (void)setStartLine:(int)arg1;
- (int)startColumn;
- (int)startLine;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

+ (id)ik_cssSourceRangeForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1 withNewLineIndexSet:(id)arg2;
+ (id)ik_emptySourceRange;
+ (id)ik_newLineIndexSetForStyleMarkup:(id)arg1;
+ (id)safe_initWithStartLine:(int)arg1 startColumn:(int)arg2 endLine:(int)arg3 endColumn:(int)arg4;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })ik_rangeWithNewLineIndexSet:(id)arg1;

@end
