
@interface _UITextServiceSessionContext : NSObject <NSSecureCoding> {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _presentationRect;
    RVItem * _rvItemWithContext;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _selectedRange;
    UIResponder<UITextInput> * _textInput;
    NSString * _textWithContext;
    UIView * _view;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } presentationRect;
@property (nonatomic, readonly, copy) RVItem *rvItemWithContext;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } selectedRange;
@property (nonatomic, readonly) UIResponder<UITextInput> *textInput;
@property (nonatomic, readonly, copy) NSString *textWithContext;
@property (nonatomic, retain) UIView *view;

+ (id)selectedTextRangeForTextInput:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })selectionBoundingBoxForTextInput:(id)arg1;
+ (id)sessionContextForType:(long long)arg1 withTextInput:(id)arg2;
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg3 withView:(id)arg4;
+ (id)sessionContextWithText:(id)arg1 withRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 withView:(id)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)_gatherAdditionalContext;
- (bool)_typeRequiresContext:(long long)arg1;
- (void)convertRectToView:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initForType:(long long)arg1 withText:(id)arg2 withTextInput:(id)arg3 withView:(id)arg4;
- (id)initWithCoder:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })presentationRect;
- (id)rvItemWithContext;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })selectedRange;
- (void)setView:(id)arg1;
- (id)textInput;
- (id)textWithContext;
- (id)view;

@end
