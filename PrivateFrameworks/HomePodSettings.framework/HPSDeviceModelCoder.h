
@interface HPSDeviceModelCoder : NSObject <HomePodSettings.MessageSerializing>

- (bool)deserialize:(id)arg1 withElement:(id)arg2 error:(id*)arg3;
- (id)init;
- (id)serialize:(id)arg1 error:(id*)arg2;

@end
