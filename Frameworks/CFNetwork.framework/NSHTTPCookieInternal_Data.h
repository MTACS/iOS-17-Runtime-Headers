
@interface NSHTTPCookieInternal_Data : NSHTTPCookieInternal {
    struct CompactHTTPCookieWithData { int (**x1)(); char *x2; } * _fromData;
}

- (id)_initWithCookie:(id)arg1 partition:(id)arg2;
- (id)_initWithHeader:(const struct CompactCookieHeader { }*)arg1;
- (id)_initWithProperties:(id)arg1 fromString:(bool)arg2;
- (struct HTTPCookie { int (**x1)(); }*)_inner;
- (void)dealloc;
- (id)init;

@end
