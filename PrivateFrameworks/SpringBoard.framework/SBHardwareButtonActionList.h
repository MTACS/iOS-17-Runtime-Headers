
@interface SBHardwareButtonActionList : NSObject {
    NSMutableArray * _actionBlocks;
    bool  _buttonDown;
    long long  _performQueueNestCount;
}

@property (nonatomic, retain) NSMutableArray *actionBlocks;
@property (getter=isButtonDown, nonatomic) bool buttonDown;

- (void).cxx_destruct;
- (id)actionBlocks;
- (bool)isButtonDown;
- (void)performQueuedButtonUpActions;
- (void)scheduleButtonUpActionBlock:(id /* block */)arg1;
- (void)setActionBlocks:(id)arg1;
- (void)setButtonDown:(bool)arg1;

@end
