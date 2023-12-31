
@interface UIAccessibilityAutomationAction : NSObject {
    NSString * _identifier;
    SEL  _selector;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) SEL selector;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 selector:(SEL)arg2;
- (SEL)selector;

@end
