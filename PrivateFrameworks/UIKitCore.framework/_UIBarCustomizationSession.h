
@interface _UIBarCustomizationSession : NSObject {
    NSMutableArray * __mutableAdditionalItems;
    NSMutableArray * __mutableVisibleItems;
    <_UIBarCustomizerAnimating> * _beginAnimationCoordinator;
    <_UIBarCustomizerAnimating> * _endAnimationCoordinator;
    NSArray * _sourceItems;
}

@property (getter=_mutableAdditionalItems, nonatomic, retain) NSMutableArray *_mutableAdditionalItems;
@property (getter=_mutableVisibleItems, nonatomic, retain) NSMutableArray *_mutableVisibleItems;
@property (nonatomic, readonly) NSArray *additionalItems;
@property (nonatomic, readonly) <_UIBarCustomizerAnimating> *beginAnimationCoordinator;
@property (nonatomic, readonly) <_UIBarCustomizerAnimating> *endAnimationCoordinator;
@property (nonatomic, copy) NSArray *sourceItems;
@property (nonatomic, readonly) NSArray *visibleItems;

+ (id)sessionWithVisibleItems:(id)arg1 additionalItems:(id)arg2;

- (void).cxx_destruct;
- (id)_mutableAdditionalItems;
- (id)_mutableVisibleItems;
- (id)additionalItems;
- (id)beginAnimationCoordinator;
- (id)endAnimationCoordinator;
- (void)setSourceItems:(id)arg1;
- (void)set_mutableAdditionalItems:(id)arg1;
- (void)set_mutableVisibleItems:(id)arg1;
- (id)sourceItems;
- (id)visibleItems;

@end
