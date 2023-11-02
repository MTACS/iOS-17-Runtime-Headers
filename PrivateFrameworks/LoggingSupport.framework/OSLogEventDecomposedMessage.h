
@interface OSLogEventDecomposedMessage : NSObject {
    const char * _fmt;
    bool  _hasPopulatedFields;
    const struct os_log_fmt_hdr_s { unsigned char x1; unsigned char x2; unsigned char x3[0]; } * _hdr;
    bool  _hdrNeedsFree;
    void * _hdr_buffer;
    unsigned long long  _messageState;
    unsigned short  _placeholderCount;
    const void * _privdata;
    unsigned short  _privsize;
    OSLogEventProxy * _proxy;
    const void * _pubdata;
    unsigned short  _pubsize;
    struct os_log_fmt_raw_placeholder { void *x1; struct os_log_fmt_cspec_s { char *x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned short x_2_1_5; unsigned short x_2_1_6; unsigned short x_2_1_7; int x_2_1_8; int x_2_1_9; char *x_2_1_10; char *x_2_1_11; char *x_2_1_12; unsigned long long x_2_1_13; } x2; union { long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; long doublex_3_1_4; } x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned long long x7; bool x8; } * _rawPlaceholders;
    unsigned long long  _sizeof_long;
    unsigned long long  _variant;
}

@property (readonly) unsigned long long placeholderCount;
@property (nonatomic, readonly) OSLogEventProxy *proxy;
@property (nonatomic, readonly) unsigned long long sizeOfLong;
@property (nonatomic, readonly) unsigned long long state;

- (void)_initializePlaceholders;
- (void)_populateFields;
- (struct os_log_fmt_raw_placeholder { void *x1; struct os_log_fmt_cspec_s { char *x_2_1_1; unsigned short x_2_1_2; unsigned char x_2_1_3; unsigned short x_2_1_4; unsigned short x_2_1_5; unsigned short x_2_1_6; unsigned short x_2_1_7; int x_2_1_8; int x_2_1_9; char *x_2_1_10; char *x_2_1_11; char *x_2_1_12; unsigned long long x_2_1_13; } x2; union { long long x_3_1_1; unsigned long long x_3_1_2; double x_3_1_3; long doublex_3_1_4; } x3; unsigned char x4; unsigned char x5; unsigned short x6; unsigned long long x7; bool x8; }*)_rawPlaceholderForIndex:(unsigned long long)arg1;
- (void)_unmake;
- (id)argumentAtIndex:(unsigned long long)arg1;
- (void)dealloc;
- (id)initWithEventProxy:(id)arg1;
- (id)literalPrefixAtIndex:(unsigned long long)arg1;
- (id)placeholderAtIndex:(unsigned long long)arg1;
- (unsigned long long)placeholderCount;
- (id)proxy;
- (unsigned long long)sizeOfLong;
- (unsigned long long)state;

@end
