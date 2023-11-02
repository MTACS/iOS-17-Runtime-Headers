
@interface _UIONavigationBarTitleRenamerRemoteSessionResponse : BSActionResponse

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic, readonly) bool shouldEndEditing;
@property (nonatomic, readonly) NSString *text;

+ (id)shouldEndEditingResponse:(bool)arg1;
+ (id)successResponseForAction:(int)arg1;
+ (id)willBeginRenamingResponseWithText:(id)arg1 selectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;

- (int)_action;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (bool)shouldEndEditing;
- (id)text;

@end
