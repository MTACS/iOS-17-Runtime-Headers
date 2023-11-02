
@interface UIAccessibilityCustomRotorItemResult : NSObject {
    <NSObject> * _targetElement;
    UITextRange * _targetRange;
    NSUUID * uuid;
}

@property (nonatomic) <NSObject> *targetElement;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } targetNSRange;
@property (nonatomic, retain) UITextRange *targetRange;
@property (nonatomic, retain) NSArray *targetTextMarkerRange;
@property (nonatomic, retain) NSUUID *uuid;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2;
- (void)setTargetElement:(id)arg1;
- (void)setTargetRange:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)targetElement;
- (id)targetRange;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)initWithTargetElement:(id)arg1 targetRange:(id)arg2 targetTextMarkerRange:(id)arg3;
- (void)setTargetNSRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTargetTextMarkerRange:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })targetNSRange;
- (id)targetTextMarkerRange;

@end
