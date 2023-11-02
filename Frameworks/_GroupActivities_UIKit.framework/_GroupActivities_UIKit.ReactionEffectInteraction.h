
@interface _GroupActivities_UIKit.ReactionEffectInteraction : NSObject <UIInteraction> {
    void _presentationContext;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  _reaction;
    void groupSessionSubscriptions;
    void messenger;
    void reactionDurationSubscription;
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
