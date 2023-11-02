
@interface MPCAssistantAvailability : NSObject

- (void)assistantRadioGetAvailability:(id /* block */)arg1;
- (void)assistantRadioGetAvailability:(struct { bool x1; bool x2; bool x3; bool x4; })arg1 completion:(id /* block */)arg2;
- (long long)assistantStreamingGetAvailability;
- (long long)assistantStreamingGetAvailability:(struct { bool x1; bool x2; bool x3; bool x4; })arg1;

@end
