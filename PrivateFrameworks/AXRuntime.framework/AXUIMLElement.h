
@interface AXUIMLElement : AXUIElement {
    NSMutableArray * _customActions;
    AXUIElement * _hostingParent;
    bool  _isReconciling;
    NSString * _label;
    unsigned long long  _mlGeneration;
    AXUIElement * _parent;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _portraitUpFrame;
    struct CGPoint { 
        double x; 
        double y; 
    }  _rotatedCenterPoint;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _rotatedFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _screenFrame;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _touchExpandedFrame;
    unsigned long long  _traits;
    long long  _uiClass;
    NSString * _value;
}

@property (nonatomic, retain) NSString *label;
@property (nonatomic) unsigned long long mlGeneration;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } portraitUpFrame;
@property (nonatomic) struct CGPoint { double x1; double x2; } rotatedCenterPoint;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } rotatedFrame;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } screenFrame;

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_appRelativeRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contextId:(unsigned int)arg2;
+ (void)_applyAXTraitsForElement:(id)arg1 uiClass:(long long)arg2;
+ (id)_cachedMLElementsForID:(id)arg1;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_convertFrameToPortraitUp:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 fromOrientation:(long long)arg2 appFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
+ (void)_fireRefreshTimer;
+ (long long)_interfaceOrientationForElement:(id)arg1;
+ (void)_queue_createMLElements:(id)arg1 postDelegateCallback:(bool)arg2;
+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })_screenRelativeRectForRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 contextId:(unsigned int)arg2;
+ (void)_setCachedMLElements:(id)arg1 forID:(id)arg2;
+ (id)_textDetectionOptions:(id)arg1 options:(id)arg2;
+ (struct { id x1; struct CGRect { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_2_1_1; struct CGSize { double x_2_2_1; double x_2_2_2; } x_2_1_2; } x2; })_windowContextInformation:(id)arg1;
+ (id)cachedElementForParent:(struct __AXUIElement { }*)arg1;
+ (void)clearCaches;
+ (void)clearCachesForAppsExcluding:(id)arg1;
+ (id)elementsInDirection:(long long)arg1 withElement:(id)arg2 nextElements:(id)arg3;
+ (void)initialize;
+ (bool)performFuzzyHitTestNextTime;
+ (void)setAutoRefresh:(bool)arg1 forApp:(id)arg2;
+ (void)setFrameDelegate:(id)arg1;
+ (void)setPerformFuzzyHitTestNextTime:(bool)arg1;
+ (id)sharedFingerController;

- (void).cxx_destruct;
- (id)_appElement;
- (void)_applyCustomActionsForFeature:(id)arg1 screenScale:(double)arg2 screenRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 elements:(id)arg4;
- (id)_currentMLElements;
- (id)_findMatchingElementForMLElement:(id)arg1 flattenedAppElements:(id)arg2;
- (id)_flattenedAppElements;
- (void)_forceMLElementRefresh:(id)arg1 postDelegateCallback:(bool)arg2 completionBlock:(id /* block */)arg3;
- (bool)_handleScroll:(int)arg1;
- (bool)_handleScrollToVisible:(id)arg1;
- (bool)_isTopLevelMLElement;
- (id)_reconcileAppElementsWithMLElements:(id)arg1 flattenedElements:(id)arg2;
- (id)_reconcileElements:(id)arg1;
- (id)_reconciledElements;
- (bool)_shouldDemoteElement:(id)arg1 withMLElements:(id)arg2;
- (bool)_shouldPromoteElement:(id)arg1;
- (bool)_simulateScrollAction:(int)arg1 withScreenDistanceFactor:(double)arg2 forVisibleAction:(bool)arg3;
- (id)_topLevelAppElement;
- (id)_topLevelMLElement;
- (id)arrayWithAXAttribute:(long long)arg1;
- (bool)boolWithAXAttribute:(long long)arg1;
- (bool)canPerformAXAction:(int)arg1;
- (struct CGColor { }*)colorWithAXAttribute:(long long)arg1;
- (void*)copyAttributeValue:(long long)arg1;
- (void*)copyAttributeValue:(long long)arg1 parameter:(void*)arg2;
- (void*)copyAttributeValue:(long long)arg1 parameter:(void*)arg2 baseElement:(id)arg3;
- (struct __AXUIElement { }*)copyElementAtPosition:(struct CGPoint { double x1; double x2; })arg1;
- (void)disableCache;
- (void)enableCache:(bool)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })frame;
- (id)initWithParentElement:(struct __AXUIElement { }*)arg1;
- (bool)isMLElement;
- (bool)isProbablyEqual:(id)arg1;
- (bool)isValid;
- (bool)isValidForApplication:(id)arg1;
- (id)label;
- (unsigned long long)mlGeneration;
- (id)nextElementsWithCount:(unsigned long long)arg1;
- (id)nextElementsWithCount:(unsigned long long)arg1 baseElement:(id)arg2;
- (id)nextElementsWithParameters:(id)arg1;
- (id)numberWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1;
- (id)objectWithAXAttribute:(long long)arg1 parameter:(void*)arg2;
- (struct CGPath { }*)pathWithAXAttribute:(long long)arg1;
- (bool)performAXAction:(int)arg1;
- (bool)performAXAction:(int)arg1 withValue:(id)arg2 fencePort:(unsigned int)arg3;
- (struct CGPoint { double x1; double x2; })pointWithAXAttribute:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })portraitUpFrame;
- (id)previousElementsWithCount:(unsigned long long)arg1;
- (id)previousElementsWithCount:(unsigned long long)arg1 baseElement:(id)arg2;
- (id)previousElementsWithParameters:(id)arg1;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })rangeWithAXAttribute:(long long)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rectWithAXAttribute:(long long)arg1;
- (struct CGPoint { double x1; double x2; })rotatedCenterPoint;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })rotatedFrame;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })screenFrame;
- (void)setAXAttribute:(long long)arg1 withArray:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withBOOL:(bool)arg2;
- (void)setAXAttribute:(long long)arg1 withFloat:(float)arg2;
- (void)setAXAttribute:(long long)arg1 withLong:(long long)arg2;
- (void)setAXAttribute:(long long)arg1 withNumber:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withObject:(id)arg2 synchronous:(bool)arg3;
- (void)setAXAttribute:(long long)arg1 withPoint:(struct CGPoint { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withSize:(struct CGSize { double x1; double x2; })arg2;
- (void)setAXAttribute:(long long)arg1 withString:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElement:(id)arg2;
- (void)setAXAttribute:(long long)arg1 withUIElementArray:(id)arg2;
- (void)setLabel:(id)arg1;
- (void)setMlGeneration:(unsigned long long)arg1;
- (void)setPortraitUpFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setRotatedCenterPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)setRotatedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setScreenFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)stringWithAXAttribute:(long long)arg1;
- (id)topLevelMLElement;
- (id)uiElementsWithAttribute:(long long)arg1;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2;
- (id)uiElementsWithAttribute:(long long)arg1 parameter:(void*)arg2 fetchAttributes:(bool)arg3;
- (void)updateCache:(long long)arg1;
- (void)updateCacheWithAttributes:(id)arg1;
- (id)valueArrayWithAXAttributes:(struct __CFArray { }*)arg1;

@end
