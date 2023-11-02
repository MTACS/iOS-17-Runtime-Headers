
@interface OZRigDropMenuTarget : NSObject {
    void * _pRig;
}

+ (id)rigDropMenuTargetForRig:(void*)arg1;

- (void)pasteHelper:(unsigned int)arg1;
- (void)pasteToNewList;
- (void)pasteToNewSlider;
- (void)pasteToNewSwitch;
- (void)setRig:(void*)arg1;

@end
