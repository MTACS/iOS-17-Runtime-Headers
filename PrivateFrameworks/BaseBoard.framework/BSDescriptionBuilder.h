
@interface BSDescriptionBuilder : NSObject <BSDescriptionFormatting> {
    int  _activeComponent;
    NSString * _activePrefix;
    NSMutableString * _description;
    <NSObject> * _object;
    NSMutableString * _proem;
    bool  _useDebugDescription;
}

@property (nonatomic) int activeComponent;
@property (nonatomic, retain) NSString *activeMultilinePrefix;
@property (nonatomic) bool useDebugDescription;

// Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard

+ (id)builderWithObject:(id)arg1;
+ (id)componentSeparator;
+ (id)descriptionForObject:(id)arg1;
+ (id)descriptionForObject:(id)arg1 withObjectsAndNames:(id)arg2;
+ (id)nameObjectSeparator;
+ (id)succinctDescriptionForObject:(id)arg1;

- (void).cxx_destruct;
- (int)activeComponent;
- (id)activeMultilinePrefix;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (void)appendArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3 objectTransformer:(id /* block */)arg4;
- (void)appendBodySectionWithName:(id)arg1 multilinePrefix:(id)arg2 block:(id /* block */)arg3;
- (id)appendBool:(bool)arg1 withName:(id)arg2;
- (id)appendBool:(bool)arg1 withName:(id)arg2 ifEqualTo:(bool)arg3;
- (id)appendCString:(const char *)arg1 withName:(id)arg2;
- (id)appendClass:(Class)arg1 withName:(id)arg2;
- (void)appendCustomFormatWithName:(id)arg1 block:(id /* block */)arg2;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 multilinePrefix:(id)arg3 skipIfEmpty:(bool)arg4 objectTransformer:(id /* block */)arg5;
- (void)appendDictionarySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)appendDouble:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFlag:(long long)arg1 withName:(id)arg2;
- (id)appendFlag:(long long)arg1 withName:(id)arg2 skipIfNotSet:(bool)arg3;
- (id)appendFloat:(double)arg1 withName:(id)arg2;
- (id)appendFloat:(double)arg1 withName:(id)arg2 decimalPrecision:(unsigned long long)arg3;
- (id)appendFormat:(id)arg1;
- (id)appendInt64:(long long)arg1 withName:(id)arg2;
- (id)appendInt:(int)arg1 withName:(id)arg2;
- (id)appendInteger:(long long)arg1 withName:(id)arg2;
- (id)appendKey:(id)arg1;
- (id)appendKeys:(id)arg1;
- (id)appendObject:(id)arg1 withName:(id)arg2;
- (id)appendObject:(id)arg1 withName:(id)arg2 skipIfNil:(bool)arg3;
- (id)appendObjectsAndNames:(id)arg1;
- (id)appendPoint:(struct CGPoint { double x1; double x2; })arg1 withName:(id)arg2;
- (id)appendPointer:(void*)arg1 withName:(id)arg2;
- (void)appendProem:(id)arg1 block:(id /* block */)arg2;
- (id)appendQueue:(id)arg1 withName:(id)arg2;
- (id)appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withName:(id)arg2;
- (id)appendSelector:(SEL)arg1 withName:(id)arg2;
- (id)appendSize:(struct CGSize { double x1; double x2; })arg1 withName:(id)arg2;
- (id)appendString:(id)arg1;
- (void)appendString:(id)arg1 withName:(id)arg2;
- (void)appendString:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)appendSuper;
- (id)appendTimeInterval:(double)arg1 withName:(id)arg2 decomposeUnits:(bool)arg3;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUInt64:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendUnsignedInt:(unsigned int)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2;
- (id)appendUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 format:(long long)arg3;
- (id)appendVersionedPID:(long long)arg1 withName:(id)arg2;
- (id)build;
- (id)initWithObject:(id)arg1;
- (id)modifyBody:(id /* block */)arg1;
- (id)modifyProem:(id /* block */)arg1;
- (void)setActiveComponent:(int)arg1;
- (void)setActiveMultilinePrefix:(id)arg1;
- (void)setUseDebugDescription:(bool)arg1;
- (bool)useDebugDescription;

// Image: /System/Library/PrivateFrameworks/IdleTimerHosting.framework/IdleTimerHosting

- (void)itidletimerdescriptor_appendTimeInterval:(double)arg1 withName:(id)arg2;

// Image: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome

- (id)sbh_appendDescriptionsForViewControllers:(id)arg1;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (id)ui_appendArray:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)ui_appendCornerRadii:(struct UIRectCornerRadii { double x1; double x2; double x3; double x4; })arg1 withName:(id)arg2;
- (id)ui_appendEdgeInsets:(struct UIEdgeInsets { double x1; double x2; double x3; double x4; })arg1 withName:(id)arg2;
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2;
- (id)ui_appendFloat:(double)arg1 withName:(id)arg2 ifNotEqualTo:(double)arg3;
- (id)ui_appendInteger:(long long)arg1 withName:(id)arg2 ifNotEqualTo:(long long)arg3;
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2;
- (id)ui_appendInterfaceOrientation:(long long)arg1 withName:(id)arg2 skipIfUnknown:(bool)arg3;
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2;
- (id)ui_appendInterfaceOrientationMask:(unsigned long long)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)ui_appendObject:(id)arg1 withName:(id)arg2 usingLightweightDescription:(bool)arg3;
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2;
- (void)ui_appendOrientationDebugDescription:(id)arg1 withName:(id)arg2 skipIfNil:(bool)arg3;
- (void)ui_appendOrientationDebuggingArraySection:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)ui_appendRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 withName:(id)arg2 ifNotEqualTo:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2;
- (id)ui_appendReferenceDisplayModeStatus:(long long)arg1 withName:(id)arg2 skipIfNotSupported:(bool)arg3;
- (id)ui_appendSet:(id)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;
- (id)ui_appendTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withName:(id)arg2;
- (id)ui_appendTransform:(struct CGAffineTransform { double x1; double x2; double x3; double x4; double x5; double x6; })arg1 withName:(id)arg2 skipIfIdentity:(bool)arg3;
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2;
- (id)ui_appendUserInterfaceIdiom:(long long)arg1 withName:(id)arg2 skipIfEmpty:(bool)arg3;

@end
