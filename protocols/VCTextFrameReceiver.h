
@protocol VCTextFrameReceiver

@required

- (void)didDetectMissingFrame;
- (void)didReceiveFrame:(struct tagAudioFrame { int x1; int x2; bool x3; unsigned short x4; unsigned int x5; unsigned char x6[1125]; int x7; int x8; unsigned char x9[16]; unsigned char x10; int x11; int x12; double x13; int x14; int x15; int (*x16)(); void *x17; struct tagDecoderSettings {} *x18; bool x19; unsigned int x20; unsigned char x21; unsigned short x22; struct tagAudioFrame {} *x23; struct tagAudioFrame {} *x24; unsigned int x25; }*)arg1;

@end
