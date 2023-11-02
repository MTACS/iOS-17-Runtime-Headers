
@interface _UIColorPickerColorQueue : NSObject {
    <_UIColorPickerColorQueueDelegate> * _delegate;
    CADisplayLink * _displayLink;
    _UIColorPickerColorQueueContainer * _latestObject;
}

@property (nonatomic) <_UIColorPickerColorQueueDelegate> *delegate;
@property (nonatomic, retain) CADisplayLink *displayLink;
@property (nonatomic, retain) _UIColorPickerColorQueueContainer *latestObject;

- (void).cxx_destruct;
- (void)_displayLinkFired;
- (void)_forwardToDelegate:(id)arg1;
- (void)_pickerDidSelectColor:(id)arg1 colorSpace:(id)arg2 isVolatile:(bool)arg3;
- (id)delegate;
- (id)displayLink;
- (id)init;
- (id)latestObject;
- (void)setDelegate:(id)arg1;
- (void)setDisplayLink:(id)arg1;
- (void)setLatestObject:(id)arg1;

@end
