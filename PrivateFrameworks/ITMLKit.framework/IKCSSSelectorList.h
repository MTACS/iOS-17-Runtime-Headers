
@interface IKCSSSelectorList : NSObject <NSCopying> {
    IKMutableArray * _selectors;
}

@property (nonatomic, readonly) IKMutableArray *selectors;

- (void).cxx_destruct;
- (void)addSelector:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)description;
- (id)firstSelector;
- (id)init;
- (id)lastSelector;
- (id)selectorAtIndex:(unsigned long long)arg1;
- (id)selectors;

@end
