
@interface BUOSStateDataSerialization : NSObject

+ (struct os_state_data_s { unsigned int x1; union { unsigned int x_2_1_1 : 32; unsigned int x_2_1_2; } x2; struct os_state_data_decoder_s { BOOL x_3_1_1[64]; BOOL x_3_1_2[64]; } x3; BOOL x4[64]; unsigned char x5[0]; }*)dataWithTitle:(id)arg1 propertyList:(id)arg2 error:(out id*)arg3;

@end
