
@interface SBSwitcherResizeGrabberLayoutAttributes : NSObject <NSCopying, NSMutableCopying> {
    unsigned long long  _edge;
    SBAppLayout * _leafAppLayout;
}

@property (nonatomic) unsigned long long edge;
@property (nonatomic, retain) SBAppLayout *leafAppLayout;

+ (id)attributesWithLeafAppLayout:(id)arg1 edge:(unsigned long long)arg2;

- (void).cxx_destruct;
- (id)_copy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)edge;
- (id)leafAppLayout;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setEdge:(unsigned long long)arg1;
- (void)setLeafAppLayout:(id)arg1;

@end
