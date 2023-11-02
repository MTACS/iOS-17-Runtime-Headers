
@interface _EMKTouchInfo : NSObject {
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _frame;
    EMKEmojiTokenList * _tokenList;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _tokenListRange;
}

@property struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (retain) EMKEmojiTokenList *tokenList;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } tokenListRange;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (void)setFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setTokenList:(id)arg1;
- (void)setTokenListRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (id)tokenList;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })tokenListRange;

@end
