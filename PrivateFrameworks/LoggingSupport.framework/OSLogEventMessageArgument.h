
@interface OSLogEventMessageArgument : NSObject {
    OSLogEventDecomposedMessage * _decomposedMessage;
    struct os_log_fmt_raw_placeholder { void *x1; struct os_log_fmt_cspec_s { char *x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned short x_2_1_5; unsigned short x_2_1_6; unsigned short x_2_1_7; int x_2_1_8; int x_2_1_9; char *x_2_1_10; char *x_2_1_11; char *x_2_1_12; unsigned long long x_2_1_13; } x2; union { long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; long doublex_3_1_4; } x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned long long x7; bool x8; } * _rawArg;
    unsigned long long  _sizeofLong;
}

@property (nonatomic, readonly) unsigned long long availability;
@property (nonatomic, readonly) unsigned long long category;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) long double longDoubleValue;
@property (nonatomic, readonly) NSObject *objectRepresentation;
@property (nonatomic, readonly) unsigned long long privacy;
@property (nonatomic, readonly) const void*rawBytes;
@property (nonatomic, readonly) unsigned short rawBytesLength;
@property (nonatomic, readonly) unsigned long long scalarCategory;
@property (nonatomic, readonly) unsigned long long scalarType;
@property (nonatomic, readonly) unsigned long long unsignedInt64Value;

- (unsigned long long)availability;
- (unsigned long long)category;
- (double)doubleValue;
- (id)initWithProxy:(id)arg1 index:(unsigned long long)arg2;
- (long long)int64Value;
- (long double)longDoubleValue;
- (id)objectRepresentation;
- (unsigned long long)privacy;
- (const void*)rawBytes;
- (unsigned short)rawBytesLength;
- (unsigned long long)scalarCategory;
- (unsigned long long)scalarType;
- (unsigned long long)unsignedInt64Value;

@end
