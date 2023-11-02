
@interface UIAccessibilityCustomRotor : NSObject {
    NSAttributedString * _attributedName;
    id /* block */  _itemSearchBlock;
    long long  systemRotorType;
    id  targetElement;
    NSUUID * uuid;
}

@property (nonatomic, copy) NSAttributedString *attributedName;
@property (nonatomic, copy) id /* block */ itemSearchBlock;
@property (nonatomic) long long linkCount;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long systemRotorType;
@property (nonatomic) id targetElement;
@property (nonatomic, retain) NSUUID *uuid;
@property (nonatomic) bool visibleInTouchRotor;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (id)attributedName;
- (id)initWithAttributedName:(id)arg1 itemSearchBlock:(id /* block */)arg2;
- (id)initWithName:(id)arg1 itemSearchBlock:(id /* block */)arg2;
- (id)initWithSystemType:(long long)arg1 itemSearchBlock:(id /* block */)arg2;
- (id /* block */)itemSearchBlock;
- (id)name;
- (void)setAttributedName:(id)arg1;
- (void)setItemSearchBlock:(id /* block */)arg1;
- (void)setName:(id)arg1;
- (void)setSystemRotorType:(long long)arg1;
- (void)setTargetElement:(id)arg1;
- (void)setUuid:(id)arg1;
- (long long)systemRotorType;
- (id)targetElement;
- (id)uuid;

// Image: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility

- (id)_accessibilityAXAttributedName;
- (long long)linkCount;
- (void)setLinkCount:(long long)arg1;
- (void)setVisibleInTouchRotor:(bool)arg1;
- (bool)visibleInTouchRotor;

@end
