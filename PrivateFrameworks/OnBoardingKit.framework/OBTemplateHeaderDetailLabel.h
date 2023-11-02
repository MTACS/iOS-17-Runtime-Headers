
@interface OBTemplateHeaderDetailLabel : OBTemplateLabel {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _bodyRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _titleRange;
}

@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } bodyRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } titleRange;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })bodyRange;
- (void)setBodyRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setDetailedTextHeader:(id)arg1 detailedTextBody:(id)arg2;
- (void)setTitleRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })titleRange;
- (void)updateTextAlignment;

@end
