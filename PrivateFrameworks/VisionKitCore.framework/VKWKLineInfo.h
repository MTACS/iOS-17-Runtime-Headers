
@interface VKWKLineInfo : VKWKTextInfo {
    NSArray * _children;
    unsigned long long  _layoutDirection;
    bool  _shouldWrap;
}

@property (nonatomic, retain) NSArray *children;
@property (nonatomic) unsigned long long layoutDirection;
@property (nonatomic) bool shouldWrap;

- (void).cxx_destruct;
- (id)children;
- (unsigned long long)layoutDirection;
- (void)setChildren:(id)arg1;
- (void)setLayoutDirection:(unsigned long long)arg1;
- (void)setShouldWrap:(bool)arg1;
- (bool)shouldWrap;

@end
