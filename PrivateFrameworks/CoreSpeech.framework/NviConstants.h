
@interface NviConstants : NSObject

+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })allChannelsLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })allChannelsLpcmNonInterleavedASBD;
+ (unsigned int)inputRecordingBytesPerFrame;
+ (unsigned int)inputRecordingBytesPerPacket;
+ (unsigned int)inputRecordingFramesPerPacket;
+ (unsigned int)inputRecordingNumberOfChannels;
+ (unsigned int)inputRecordingSampleBitDepth;
+ (unsigned int)inputRecordingSampleByteDepth;
+ (float)inputRecordingSampleRate;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })monoChannelLpcmASBD;
+ (unsigned int)numChannelsForNviDirectionality;
+ (unsigned int)nviDirectionalityEndingChannelId;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })nviDirectionalityLpcmInterleavedASBD;
+ (struct AudioStreamBasicDescription { double x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; })nviDirectionalityLpcmNonInterleavedASBD;
+ (unsigned int)nviDirectionalityStartingChannelId;
+ (id)nviLogsRootDir;

@end
