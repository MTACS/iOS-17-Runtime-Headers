
@interface ICTextFindingResult : NSObject {
    bool  _attachmentResult;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (getter=isAttachmentResult, nonatomic) bool attachmentResult;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (long long)compare:(id)arg1;
- (id)framesForHighlightInTextView:(id)arg1;
- (bool)isAttachmentResult;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setAttachmentResult:(bool)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
