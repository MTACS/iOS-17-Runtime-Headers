
@interface AVAudioSessionServerFactory : NSObject

+ (id)createServer;
+ (id)createServerWithAudioControlQueue:(id)arg1 delegate:(id)arg2;
+ (id)createServerWithDelegate:(id)arg1 audioControlQueue:(id)arg2;

@end
