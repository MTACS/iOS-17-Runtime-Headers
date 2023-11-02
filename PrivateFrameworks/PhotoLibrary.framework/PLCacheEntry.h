
@interface PLCacheEntry : NSObject {
    struct lruEntry { id x1; long long x2; struct { struct lruEntry {} *x_3_1_1; struct lruEntry {} **x_3_1_2; } x3; } * _entry;
    id  _object;
}

- (void)dealloc;
- (struct lruEntry { id x1; long long x2; struct { struct lruEntry {} *x_3_1_1; struct lruEntry {} **x_3_1_2; } x3; }*)lruListEntry;
- (id)object;
- (void)setObject:(id)arg1;

@end
