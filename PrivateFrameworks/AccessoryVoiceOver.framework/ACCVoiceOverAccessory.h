
@interface ACCVoiceOverAccessory : NSObject {
    NSString * _accessoryUID;
    bool  _desiredVoiceOverState;
}

@property (nonatomic, retain) NSString *accessoryUID;
@property (nonatomic) bool desiredVoiceOverState;

- (void).cxx_destruct;
- (id)accessoryUID;
- (bool)desiredVoiceOverState;
- (id)initWithAccessoryUID:(id)arg1;
- (void)setAccessoryUID:(id)arg1;
- (void)setDesiredVoiceOverState:(bool)arg1;

@end
