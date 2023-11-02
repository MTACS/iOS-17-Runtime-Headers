
@interface CBControllerSettings : NSObject <CUXPCCodable> {
    int  _discoverableState;
    BOOL  _hid15ms;
    BOOL  _setupAssistantIfNoKeyboard;
    BOOL  _setupAssistantIfNoPointingDevice;
    BOOL  _spatialSoundProfileAllowed;
}

@property (nonatomic) int discoverableState;
@property (nonatomic) BOOL hid15ms;
@property (nonatomic) BOOL setupAssistantIfNoKeyboard;
@property (nonatomic) BOOL setupAssistantIfNoPointingDevice;
@property (nonatomic) BOOL spatialSoundProfileAllowed;

- (id)description;
- (id)descriptionWithLevel:(int)arg1;
- (int)discoverableState;
- (void)encodeWithXPCObject:(id)arg1;
- (BOOL)hid15ms;
- (id)initWithXPCObject:(id)arg1 error:(id*)arg2;
- (void)setDiscoverableState:(int)arg1;
- (void)setHid15ms:(BOOL)arg1;
- (void)setSetupAssistantIfNoKeyboard:(BOOL)arg1;
- (void)setSetupAssistantIfNoPointingDevice:(BOOL)arg1;
- (void)setSpatialSoundProfileAllowed:(BOOL)arg1;
- (BOOL)setupAssistantIfNoKeyboard;
- (BOOL)setupAssistantIfNoPointingDevice;
- (BOOL)spatialSoundProfileAllowed;

@end
