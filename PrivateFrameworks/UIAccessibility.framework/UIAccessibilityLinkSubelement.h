
@interface UIAccessibilityLinkSubelement : UIAccessibilityElement <ICAccessibilityRotorSearchElement> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSArray *supportedRotorTypes;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRangeInNote;
@property (nonatomic, retain) NSURL *url;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (void).cxx_destruct;
- (unsigned long long)_accessibilityAutomationType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })accessibilityFrame;
- (unsigned long long)accessibilityTraits;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setUrl:(id)arg1;
- (id)textRangeForTextView:(id)arg1;
- (id)url;

// Image: /System/Library/PrivateFrameworks/NotesEditor.framework/NotesEditor

- (id)accessibilityCustomRotors;
- (id)supportedRotorTypes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRangeInNote;

@end
