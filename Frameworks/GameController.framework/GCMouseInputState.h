
@interface GCMouseInputState : _GCDevicePhysicalInputFacade {
    NSArray * _auxiliaryButtons;
    <GCDirectionPadElement> * _scrollWheel;
}

@property (nonatomic, readonly) NSArray *auxiliaryButtons;
@property (nonatomic, readonly) GCCursorElement *cursor;
@property (nonatomic, readonly) <GCButtonElement> *primaryButton;
@property (nonatomic, readonly) <GCDirectionPadElement> *scrollWheel;
@property (nonatomic, readonly) <GCButtonElement> *secondaryButton;
@property (nonatomic, readonly) <GCButtonElement> *thirdButton;

- (void).cxx_destruct;
- (id)auxiliaryButtons;
- (id)cursor;
- (id)primaryButton;
- (id)scroll;
- (id)scrollWheel;
- (id)secondaryButton;
- (id)thirdButton;

@end
