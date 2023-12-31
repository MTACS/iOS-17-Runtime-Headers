
@interface TSWPTabs : NSObject <NSCopying, NSFastEnumeration> {
    NSMutableArray * _tabs;
}

+ (id)tabs;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)dealloc;
- (id)description;
- (unsigned long long)indexForTabWithPosition:(double)arg1 alignment:(int)arg2 leader:(id)arg3;
- (id)init;
- (id)initWithTabs:(id)arg1;
- (void)insertTab:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)removeTabAtIndex:(unsigned long long)arg1;
- (void)setPosition:(double)arg1 forTab:(id)arg2;
- (id)tabAfterPosition:(double)arg1;
- (id)tabAtIndex:(unsigned long long)arg1;
- (id)tabAtPosition:(double)arg1;

@end
