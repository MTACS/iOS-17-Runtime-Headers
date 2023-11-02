
@interface _AppIntents_UIKit.UIAppEntityInteraction : NSObject <UIInteraction> {
    void entity;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  entityIdentifier;
    void interactionId;
    void view;
}

@property (nonatomic) UIView *view;

- (void).cxx_destruct;
- (void)didMoveToView:(id)arg1;
- (id)init;
- (void)setView:(id)arg1;
- (id)view;
- (void)willMoveToView:(id)arg1;

@end
