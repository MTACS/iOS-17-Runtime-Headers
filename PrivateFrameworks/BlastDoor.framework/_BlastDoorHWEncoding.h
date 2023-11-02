
@interface _BlastDoorHWEncoding : NSObject

+ (id)dataRepresentation:(id)arg1 frame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg2 bound:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3 uuid:(id)arg4 date:(id)arg5;
+ (id)decodeHandwritingFromData:(id)arg1;
+ (id)encodeHandwriting:(id)arg1 compress:(bool)arg2;

@end
