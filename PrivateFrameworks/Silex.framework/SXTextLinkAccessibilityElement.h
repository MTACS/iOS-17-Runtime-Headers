
@interface SXTextLinkAccessibilityElement : UIAccessibilityElement {
    NSString * _displayText;
    SXTextTangierFlowRep * _parentRep;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _rangeInParentRep;
    NSURL * _url;
}

@property (nonatomic, readonly) NSString *displayText;
@property (nonatomic) SXTextTangierFlowRep *parentRep;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } rangeInParentRep;
@property (nonatomic, readonly) NSURL *url;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (id)accessibilityValue;
- (id)description;
- (id)displayText;
- (id)initWithHyperlinkField:(id)arg1 parentRep:(id)arg2;
- (bool)isAccessibilityElement;
- (id)parentRep;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeInParentRep;
- (void)setParentRep:(id)arg1;
- (id)url;

@end
