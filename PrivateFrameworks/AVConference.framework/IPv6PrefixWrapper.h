
@interface IPv6PrefixWrapper : NSObject {
    struct { int x1; unsigned char x2[12]; } * _ipv6Prefix;
}

@property (readonly) const struct { int x1; unsigned char x2[12]; }*ipv6Prefix;

- (void)dealloc;
- (id)initWithPrefix:(struct { int x1; unsigned char x2[12]; }*)arg1;
- (const struct { int x1; unsigned char x2[12]; }*)ipv6Prefix;

@end
