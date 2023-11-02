
@interface UIControlTargetAction : NSObject {
    SEL  _action;
    UIAction * _actionHandler;
    bool  _cancelled;
    unsigned long long  _eventMask;
    id  _target;
}

@property (nonatomic) bool cancelled;

- (void).cxx_destruct;
- (bool)cancelled;
- (id)description;
- (void)setCancelled:(bool)arg1;

@end
