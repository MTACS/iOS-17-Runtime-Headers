
@interface NSHTTPCookieInternal_Ref : NSHTTPCookieInternal {
    struct CompactHTTPCookieReference { int (**x1)(); struct CompactCookieArray {} *x2; struct CompactCookieHeader {} *x3; } * _fromRef;
}

- (id)_initWithReference:(const struct CompactCookieArray { }*)arg1 index:(long long)arg2;
- (struct HTTPCookie { int (**x1)(); }*)_inner;
- (void)dealloc;
- (id)init;

@end
