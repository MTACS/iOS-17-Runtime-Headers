
@interface PKTextInputTextPlaceholder : UITextPlaceholder {
    NSArray * __rects;
    id  _placeholder;
    bool  _shouldIgnoreOrigin;
}

@property (nonatomic, retain) NSArray *_rects;
@property (nonatomic, retain) id placeholder;
@property (nonatomic) bool shouldIgnoreOrigin;

+ (id)placeholderWithText:(id)arg1 rects:(id)arg2;
+ (id)placeholderWithTextPlaceholder:(id)arg1;
+ (id)placeholderWithToken:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2;
+ (id)placeholderWithWebTextPlaceholder:(id)arg1;

- (void).cxx_destruct;
- (id)_rects;
- (id)placeholder;
- (id)rects;
- (void)setPlaceholder:(id)arg1;
- (void)setShouldIgnoreOrigin:(bool)arg1;
- (void)set_rects:(id)arg1;
- (bool)shouldIgnoreOrigin;

@end
