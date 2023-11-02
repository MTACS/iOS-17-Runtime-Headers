
@interface BWNodeStillImagePrewarmMessage : BWNodeMessage {
    BWStillImageSettings * _stillImageSettings;
}

@property (readonly) BWStillImageSettings *stillImageSettings;

+ (id)newMessageWithStillImageSettings:(id)arg1;

- (void)dealloc;
- (id)stillImageSettings;

@end
