
@interface UITextReplacement : NSObject {
    NSString * _menuTitle;
    NSString * _originalText;
    UITextRange * _range;
    id /* block */  _replacementCompletionBlock;
    NSString * _replacementText;
    unsigned int  _usageTrackingMask;
}

@property (nonatomic, readonly) NSString *menuTitle;
@property (nonatomic, readonly) NSString *originalText;
@property (nonatomic, readonly) UITextRange *range;
@property (nonatomic, copy) id /* block */ replacementCompletionBlock;
@property (nonatomic, readonly) NSString *replacementText;
@property (nonatomic) unsigned int usageTrackingMask;

+ (id)replacementWithRange:(id)arg1 original:(id)arg2 replacement:(id)arg3 menuTitle:(id)arg4;

- (void).cxx_destruct;
- (bool)_isNoReplacementsFoundItem;
- (void)didReplaceTextWithTarget:(id)arg1;
- (id)menuTitle;
- (id)originalText;
- (id)range;
- (id /* block */)replacementCompletionBlock;
- (id)replacementText;
- (void)setReplacementCompletionBlock:(id /* block */)arg1;
- (void)setUsageTrackingMask:(unsigned int)arg1;
- (unsigned int)usageTrackingMask;

@end
