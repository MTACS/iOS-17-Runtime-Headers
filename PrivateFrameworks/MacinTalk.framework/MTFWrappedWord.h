
@interface MTFWrappedWord : MTFWrappedSpeechElement

@property (nonatomic, readonly) NSString *fGroupPOS;
@property (nonatomic, readonly) NSString *fResolvedPOS;
@property (nonatomic, readonly) NSString *fText;

- (struct MTFEWord { int (**x1)(); short x2; BOOL x3; struct MTFESpeechElement {} *x4; struct MTFESpeechElement {} *x5; struct MTFESpeechElement {} *x6; struct MTFESpeechElement {} *x7; struct MTFESpeechElement {} *x8; unsigned int x9; short x10; BOOL x11; unsigned char x12; int x13; unsigned char x14; struct SLWordTagSet { unsigned short x_15_1_1[8]; } x15; unsigned char x16; unsigned int x17; struct SLWordTagSet { unsigned short x_18_1_1[8]; } x18; struct MTFECommands { int (**x_19_1_1)(); short x_19_1_2; BOOL x_19_1_3; struct MTFESpeechElement {} *x_19_1_4; struct MTFESpeechElement {} *x_19_1_5; struct MTFESpeechElement {} *x_19_1_6; struct MTFESpeechElement {} *x_19_1_7; struct MTFESpeechElement {} *x_19_1_8; } x19; struct MTFEPosition { short x_20_1_1; short x_20_1_2; } x20; struct MTFEPosition { short x_21_1_1; short x_21_1_2; } x21; short x22; short x23; short x24; unsigned short x25; unsigned short x26; struct MTFEWord {} *x27; BOOL x28[64]; struct MEOWWordInstance {} *x29; }*)elem;
- (id)fGroupPOS;
- (id)fResolvedPOS;
- (id)fText;

@end
