
@protocol VCRateControlAlgorithm <NSObject>

@required

- (unsigned int)actualBitrate;
- (struct tagVCRateControlAlgorithmConfig { unsigned int x1; unsigned int *x2; int x3; int x4; int x5; int x6[2]; int x7; int x8; int x9; int x10; int x11; int x12; int x13; int x14; int x15; int x16; int x17; double x18; double x19; double x20; double x21; double x22; double x23; double x24; double x25; double x26; double x27; double x28; double x29; double x30; double x31; int x32; int x33; int x34; double x35; double x36; double x37; double x38; double x39; double x40; double x41; double x42; double x43; double x44; double x45; unsigned int x46; unsigned int x47; unsigned int x48; unsigned int x49; unsigned int x50; bool x51; bool x52; bool x53; bool x54; bool x55; bool x56; bool x57; bool x58; bool x59; bool x60; bool x61; bool x62; int x63; bool x64; double x65; double x66; int x67; double x68; int x69; double x70; double x71; double x72; int x73; double x74; int x75; int x76; double x77; double x78; int x79; double x80; double x81; double x82; double x83; double x84; double x85; double x86; double x87; double x88; double x89; double x90; double x91; })config;
- (bool)didMBLRampDown;
- (bool)isCongested;
- (bool)isFirstInitialRampUpDone;
- (bool)isFirstTimestampArrived;
- (bool)isLossBasedAdaptationOn;
- (bool)isNewRateSentOut;
- (bool)isSendBitrateLimited;
- (unsigned int)localBandwidthEstimation;
- (VCRateControlMediaController *)mediaController;
- (unsigned int)mostBurstLoss;
- (double)owrd;
- (double)packetLossRate;
- (double)packetLossRateAudio;
- (double)packetLossRateVideo;
- (unsigned int)rateChangeCounter;
- (unsigned int)rateSharingCount;
- (unsigned int)remoteBandwidthEstimation;
- (struct tagVCRateControlAlgorithmReportStats { unsigned int x1; int x2; union { struct tagVCRateControlAlgorithmSmartBrakeStats { double x_1_2_1; int x_1_2_2; int x_1_2_3; int x_1_2_4; unsigned char x_1_2_5; } x_3_1_1; } x3; })reportStatistics;
- (double)roundTripTime;
- (void)setDidMBLRampDown:(bool)arg1;
- (void)setIsFirstTimestampArrived:(bool)arg1;
- (void)setLocalBandwidthEstimation:(unsigned int)arg1;
- (void)setMediaController:(VCRateControlMediaController *)arg1;
- (void)setRateSharingCount:(unsigned int)arg1;
- (unsigned int)targetBitrate;
- (unsigned int)totalPacketReceived;
- (unsigned int)worstRecentBurstLoss;
- (double)worstRecentRoundTripTime;

@end
