
@interface SCRCTargetSelector : NSObject {
    SEL  _selector;
    id  _target;
}

@property (nonatomic, readonly) SEL selector;
@property (nonatomic, readonly) id target;

+ (id)targetSelectorWithTarget:(id)arg1 selector:(SEL)arg2;

- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;
- (id)target;

@end
