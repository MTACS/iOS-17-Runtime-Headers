
@interface _UITextFieldEditingToken : NSObject <_UITextFieldEditingToken> {
    NSArray * _attributeNames;
    struct { 
        unsigned int restoreTextAttributes : 1; 
        unsigned int restoreDefaultAttributes : 1; 
        unsigned int ended : 1; 
    }  _flags;
    _UICascadingTextStorage * _textStorage;
}

@property (nonatomic, readonly) NSArray *attributeNames;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool restoreDefaultAttributes;
@property (nonatomic) bool restoreTextAttributes;
@property (readonly) Class superclass;
@property (nonatomic, readonly) _UICascadingTextStorage *textStorage;

- (void).cxx_destruct;
- (id)attributeNames;
- (bool)endEditing;
- (id)initWithTextStorage:(id)arg1 attributeNames:(id)arg2;
- (bool)restoreDefaultAttributes;
- (bool)restoreTextAttributes;
- (void)setRestoreDefaultAttributes:(bool)arg1;
- (void)setRestoreTextAttributes:(bool)arg1;
- (id)textStorage;

@end
