
@interface WKSafeBrowsingTextView : UITextView {
    struct WeakObjCPtr<WKSafeBrowsingWarning> { 
        id m_weakReference; 
    }  _warning;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithAttributedString:(id)arg1 forWarning:(id)arg2;
- (struct CGSize { double x1; double x2; })intrinsicContentSize;

@end
