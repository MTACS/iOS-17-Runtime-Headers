
@interface ACCAssistiveTouchAccessory : NSObject {
    NSString * _accessoryUID;
    bool  _desiredAssistiveTouchState;
}

@property (nonatomic, retain) NSString *accessoryUID;
@property (nonatomic) bool desiredAssistiveTouchState;

- (void).cxx_destruct;
- (id)accessoryUID;
- (bool)desiredAssistiveTouchState;
- (id)initWithAccessoryUID:(id)arg1;
- (void)setAccessoryUID:(id)arg1;
- (void)setDesiredAssistiveTouchState:(bool)arg1;

@end
