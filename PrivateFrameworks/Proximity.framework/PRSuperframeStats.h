
@interface PRSuperframeStats : NSObject {
    struct shared_ptr<rose::ResponderSuperframeStats> { 
        struct ResponderSuperframeStats {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _stats;
}

@property (readonly) /* Warning: unhandled struct encoding: '{ResponderSuperframeStats=dS{ResponderSuperframeCompleteEvent=SSCd{array<unsigned char' */ struct  stats; /* unknown property attribute:  std::allocator<Rose::ResponderSuperframeRxPacketInfo>>=^{ResponderSuperframeRxPacketInfo}}}}{optional<double>=(?=cd)B}} */

- (id).cxx_construct;
- (void).cxx_destruct;
- (id)initWithStats:(const void*)arg1;
- (struct ResponderSuperframeStats { double x1; unsigned short x2; struct ResponderSuperframeCompleteEvent { unsigned short x_3_1_1; unsigned short x_3_1_2; unsigned char x_3_1_3; double x_3_1_4; struct array<unsigned char, 8UL> { unsigned char x_5_2_1[8]; } x_3_1_5; unsigned short x_3_1_6; unsigned short x_3_1_7; unsigned short x_3_1_8; unsigned char x_3_1_9; unsigned char x_3_1_10; unsigned char x_3_1_11; unsigned char x_3_1_12; unsigned char x_3_1_13; unsigned char x_3_1_14; double x_3_1_15; unsigned char x_3_1_16; unsigned char x_3_1_17; unsigned char x_3_1_18; unsigned char x_3_1_19; struct vector<Rose::ResponderSuperframeRxPacketInfo, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> { struct ResponderSuperframeRxPacketInfo {} *x_20_2_1; struct ResponderSuperframeRxPacketInfo {} *x_20_2_2; struct __compressed_pair<Rose::ResponderSuperframeRxPacketInfo *, std::allocator<Rose::ResponderSuperframeRxPacketInfo>> { struct ResponderSuperframeRxPacketInfo {} *x_3_3_1; } x_20_2_3; } x_3_1_20; } x3; struct optional<double> { union { BOOL x_1_2_1; double x_1_2_2; } x_4_1_1; bool x_4_1_2; } x4; })stats;

@end
