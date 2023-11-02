
@interface WFTakePhotoAction : WFAction {
    unsigned long long  _remainingPhotos;
}

@property (nonatomic) unsigned long long remainingPhotos;

+ (id)userInterfaceProtocol;
+ (id)userInterfaceXPCInterface;

- (id)disabledOnPlatforms;
- (unsigned long long)remainingPhotos;
- (void)runAsynchronouslyWithInput:(id)arg1;
- (void)runWithRemoteUserInterface:(id)arg1 input:(id)arg2;
- (void)setRemainingPhotos:(unsigned long long)arg1;

@end
