
@interface CryptexRemoteDeviceIdentifier : NSObject {
    struct _img4_chip_instance { unsigned short x1; struct _img4_chip {} *x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; struct _img4_dgst { unsigned short x_18_1_1; unsigned long long x_18_1_2; unsigned char x_18_1_3[48]; } x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; } * _inst;
}

@property (nonatomic, readonly) struct _img4_chip_instance { unsigned short x1; struct _img4_chip {} *x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; struct _img4_dgst { unsigned short x_18_1_1; unsigned long long x_18_1_2; unsigned char x_18_1_3[48]; } x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; }*inst;

- (void)dealloc;
- (id)initWithChipInstance:(const struct _img4_chip_instance { unsigned short x1; struct _img4_chip {} *x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; struct _img4_dgst { unsigned short x_18_1_1; unsigned long long x_18_1_2; unsigned char x_18_1_3[48]; } x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; }*)arg1;
- (struct _img4_chip_instance { unsigned short x1; struct _img4_chip {} *x2; unsigned long long x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned long long x8; bool x9; bool x10; bool x11; bool x12; bool x13; bool x14; bool x15; unsigned int x16; bool x17; struct _img4_dgst { unsigned short x_18_1_1; unsigned long long x_18_1_2; unsigned char x_18_1_3[48]; } x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; }*)inst;

@end
