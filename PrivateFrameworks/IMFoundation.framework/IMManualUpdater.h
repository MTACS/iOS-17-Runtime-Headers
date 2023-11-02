
@interface IMManualUpdater : NSObject {
    SEL  _action;
    unsigned int  _needsUpdate;
    id  _target;
}

@property (nonatomic) SEL action;
@property (nonatomic) bool needsUpdate;
@property (nonatomic) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)description;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)needsUpdate;
- (void)setAction:(SEL)arg1;
- (void)setNeedsUpdate;
- (void)setNeedsUpdate:(bool)arg1;
- (void)setTarget:(id)arg1;
- (id)target;
- (void)updateIfNeeded;

@end
