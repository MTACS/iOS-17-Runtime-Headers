
@interface PXGReusableAXInfo : NSObject <PXGAXInfo, PXReusableObject, UIFocusItem> {
    bool  _allowDecorations;
    long long  _alternateUIVisibility;
    bool  _axAccessibleWhenTransparent;
    PXGBasicAXGroup * _axContainingGroup;
    long long  _axContentKind;
    NSArray * _axDecorations;
    id  _content;
    long long  _focusRingType;
    struct { 
        struct { 
            double x; 
            double y; 
            double z; 
        } center; 
        /* Warning: Unrecognized filer type: '}' using 'void*' */ void*size; 
    }  _spriteGeometry;
    unsigned int  _spriteIndex;
    struct { 
        float alpha; 
        /* Warning: Unrecognized filer type: '"' using 'void*' */ void*contentsRect; 
    }  _spriteStyle;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _spriteStyleCornerRadius;
}

@property (nonatomic) bool allowDecorations;
@property (nonatomic) long long alternateUIVisibility;
@property (nonatomic) bool axAccessibleWhenTransparent;
@property (nonatomic, readonly) <PXDisplayAsset> *axAsset;
@property (nonatomic) PXGBasicAXGroup *axContainingGroup;
@property (nonatomic) long long axContentKind;
@property (nonatomic, retain) NSArray *axDecorations;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } axFrame;
@property (nonatomic, readonly) NSString *axImageName;
@property (nonatomic, readonly) bool axIsSelected;
@property (nonatomic, readonly) NSString *axSubtitle;
@property (nonatomic, readonly) NSString *axText;
@property (nonatomic, readonly) NSString *axTitle;
@property (nonatomic, readonly) NSObject<PXAnonymousView> *axView;
@property (nonatomic, readonly) bool canBecomeFocused;
@property (nonatomic, readonly) id content;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) UIFocusEffect *focusEffect;
@property (nonatomic, readonly, copy) NSString *focusGroupIdentifier;
@property (nonatomic, readonly) long long focusGroupPriority;
@property (nonatomic, readonly) <UIFocusItemContainer> *focusItemContainer;
@property (nonatomic) long long focusRingType;
@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isTransparentFocusItem;
@property (nonatomic, readonly) <UIFocusEnvironment> *parentFocusEnvironment;
@property (nonatomic, readonly, copy) NSArray *preferredFocusEnvironments;
@property (nonatomic, readonly) UIView *preferredFocusedView;
@property (nonatomic) struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; } spriteGeometry;
@property (nonatomic) unsigned int spriteIndex;
@property (nonatomic) struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; } spriteStyle;
@property (nonatomic) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } spriteStyleCornerRadius;
@property (readonly) Class superclass;

+ (bool)_assetHasContentSourceInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_imageNameInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_textInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)_titleSubtitleInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (Class)_viewClassInLayout:(id)arg1 atSpriteIndex:(unsigned int)arg2;
+ (id)sharedPool;

- (void).cxx_destruct;
- (bool)_fillForKind:(long long)arg1 withLayout:(id)arg2 spriteIndex:(unsigned int)arg3;
- (bool)_isEligibleForFocusInteraction;
- (id)_viewAtSpriteIndex:(unsigned int)arg1;
- (bool)allowDecorations;
- (long long)alternateUIVisibility;
- (void)applyToInfo:(id)arg1;
- (bool)axAccessibleWhenTransparent;
- (id)axAsset;
- (id)axContainingGroup;
- (long long)axContentKind;
- (id)axDecorations;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })axFrame;
- (id)axImageName;
- (bool)axIsSelected;
- (id)axSubtitle;
- (id)axText;
- (id)axTitle;
- (id)axView;
- (void)becomeReusable;
- (bool)canBecomeFocused;
- (id)content;
- (id)description;
- (void)didHintFocusMovement:(id)arg1;
- (void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2;
- (bool)fillContentForContentKind:(long long)arg1 inLayout:(id)arg2 atIndex:(unsigned int)arg3;
- (id)focusEffect;
- (long long)focusGroupPriority;
- (id)focusItemContainer;
- (long long)focusRingType;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)init;
- (id)parentFocusEnvironment;
- (id)preferredFocusEnvironments;
- (void)prepareForReuse;
- (void)setAllowDecorations:(bool)arg1;
- (void)setAlternateUIVisibility:(long long)arg1;
- (void)setAxAccessibleWhenTransparent:(bool)arg1;
- (void)setAxContainingGroup:(id)arg1;
- (void)setAxContentKind:(long long)arg1;
- (void)setAxDecorations:(id)arg1;
- (void)setContent:(id)arg1 ofContentKind:(long long)arg2;
- (void)setFocusRingType:(long long)arg1;
- (void)setNeedsFocusUpdate;
- (void)setSpriteGeometry:(struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })arg1;
- (void)setSpriteIndex:(unsigned int)arg1;
- (void)setSpriteStyle:(struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; })arg1;
- (void)setSpriteStyleCornerRadius:(struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })arg1;
- (bool)shouldUpdateFocusInContext:(id)arg1;
- (struct { struct { double x_1_1_1; double x_1_1_2; double x_1_1_3; } x1; })spriteGeometry;
- (unsigned int)spriteIndex;
- (struct { float x1; struct { union { struct { float x_1_3_1; float x_1_3_2; float x_1_3_3; float x_1_3_4; } x_1_2_1; float x_1_2_2[4]; } x_2_1_1; } x2; float x3; float x4; float x5; float x6; unsigned short x7; unsigned char x8; float x9; struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x_10_1_1[4]; } x10; })spriteStyle;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })spriteStyleCornerRadius;
- (void)updateFocusIfNeeded;

@end
