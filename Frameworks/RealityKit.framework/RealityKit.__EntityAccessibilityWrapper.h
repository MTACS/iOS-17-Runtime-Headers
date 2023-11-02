
@interface RealityKit.__EntityAccessibilityWrapper : NSObject {
    void entity;
    void rootEntityWrapper;
}

@property (nonatomic, readonly) NSArray *entityAccessibilityCustomActions;
@property (nonatomic, readonly) NSArray *entityAccessibilityCustomContent;
@property (nonatomic, readonly) NSArray *entityAccessibilityCustomRotors;
@property (nonatomic, readonly) unsigned long long entityAccessibilityTraits;
@property (nonatomic, readonly) NSString *entityDescription;
@property (nonatomic, readonly) NSString *entityLabel;
@property (nonatomic, readonly) bool entitySupportsAccessibilityActivateAction;
@property (nonatomic, readonly) NSString *entityValue;
@property (nonatomic, readonly) unsigned long long identifier;
@property (nonatomic, readonly) bool isEntityAccessible;
@property (nonatomic, readonly) bool isEntityActive;
@property (nonatomic, readonly) bool isEntityRoot;
@property (nonatomic, readonly) _TtC10RealityKit28__EntityAccessibilityWrapper *rootEntityWrapper;

- (void).cxx_destruct;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })calculateScreenBoundingRectIn:(id)arg1;
- (id)entityAccessibilityCustomActions;
- (id)entityAccessibilityCustomContent;
- (id)entityAccessibilityCustomRotors;
- (unsigned long long)entityAccessibilityTraits;
- (id)entityDescription;
- (id)entityLabel;
- (void)entityPerformAccessibilityActivate;
- (void)entityPerformAccessibilityDecrement;
- (void)entityPerformAccessibilityIncrement;
- (bool)entitySupportsAccessibilityActivateAction;
- (id)entityValue;
- (unsigned long long)identifier;
- (id)init;
- (bool)isEntityAccessible;
- (bool)isEntityActive;
- (bool)isEntityRoot;
- (id)rootEntityWrapper;

@end
