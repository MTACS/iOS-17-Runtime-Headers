
@interface WebAccessibilityObjectWrapperBase : NSObject {
    struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
        unsigned long long m_identifier; 
    }  _identifier;
    struct WeakPtr<WebCore::AccessibilityObject, WTF::DefaultWeakPtrImpl> { 
        struct RefPtr<WTF::DefaultWeakPtrImpl, WTF::RawPtrTraits<WTF::DefaultWeakPtrImpl>, WTF::DefaultRefDerefTraits<WTF::DefaultWeakPtrImpl>> { 
            struct DefaultWeakPtrImpl {} *m_ptr; 
        } m_impl; 
    }  m_axObject;
}

@property (nonatomic) /* Warning: unhandled struct encoding: '{ObjectIdentifierGeneric<WebCore::AXIDType' */ struct  identifier; /* unknown property attribute:  WTF::ObjectIdentifierMainThreadAccessTraits>=Q} */

+ (void)accessibilitySetShouldRepostNotifications:(bool)arg1;

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_accessibilityWebDocumentView;
- (bool)_prepareAccessibilityCall;
- (id)accessibilityCustomContent;
- (id)accessibilityMathPostscriptPairs;
- (id)accessibilityMathPrescriptPairs;
- (id)accessibilityPlatformMathSubscriptKey;
- (id)accessibilityPlatformMathSuperscriptKey;
- (void)accessibilityPostedNotification:(id)arg1;
- (void)accessibilityPostedNotification:(id)arg1 userInfo:(id)arg2;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })accessibilityVisibleCharacterRange;
- (id)ariaLandmarkRoleDescription;
- (void)attachAXObject:(void*)arg1;
- (id)attachmentView;
- (void*)axBackingObject;
- (id)baseAccessibilityHelpText;
- (id)baseAccessibilityResolvedEditingStyles;
- (id)baseAccessibilitySpeechHint;
- (void*)baseUpdateBackingStore;
- (struct CGPath { }*)convertPathToScreenSpace:(const void*)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })convertRectToSpace:(const struct FloatRect { struct FloatPoint { float x_1_1_1; float x_1_1_2; } x1; struct FloatSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 space:(int)arg2;
- (void)detach;
- (struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })identifier;
- (id)initWithAccessibilityObject:(void*)arg1;
- (id)innerHTML;
- (bool)isIsolatedObject;
- (id)lineRectsAndText;
- (id)outerHTML;
- (void)setIdentifier:(struct ObjectIdentifierGeneric<WebCore::AXIDType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1;

@end
