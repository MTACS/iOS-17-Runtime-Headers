
@interface OSLogMessagePlaceholder : NSObject {
    struct os_log_fmt_cspec_s { char *x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; int x9; char *x10; char *x11; char *x12; unsigned long long x13; } * _placeholder;
    NSString * _placeholderString;
    NSArray * _placeholderTokens;
}

@property (nonatomic, readonly) int precision;
@property (nonatomic, readonly) NSString *rawString;
@property (nonatomic, readonly) NSArray *tokens;
@property (nonatomic, readonly) NSString *type;
@property (nonatomic, readonly) NSString *typeNamespace;
@property (nonatomic, readonly) int width;

- (void)dealloc;
- (id)initWithPlaceholderStruct:(struct os_log_fmt_cspec_s { char *x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned short x5; unsigned short x6; unsigned short x7; int x8; int x9; char *x10; char *x11; char *x12; unsigned long long x13; }*)arg1;
- (int)precision;
- (id)rawString;
- (id)tokens;
- (id)type;
- (id)typeNamespace;
- (int)width;

@end
