
@interface _UIViewLayoutEngineRelativeAlignmentRectOriginCache : NSObject {
    NSISEngine * _cacheEngine;
    struct CGPoint { 
        double x; 
        double y; 
    }  _cachedOrigin;
    UIView * _delegate;
    unsigned long long  _variableChangeCount;
}

@property (nonatomic) NSISEngine *cacheEngine;
@property (nonatomic, readonly) UIView *delegate;
@property (nonatomic, readonly) bool isValid;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } origin;
@property (nonatomic) unsigned long long variableChangeCount;

- (void).cxx_destruct;
- (id)cacheEngine;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (bool)isValid;
- (struct CGPoint { double x1; double x2; })origin;
- (void)setCacheEngine:(id)arg1;
- (void)setVariableChangeCount:(unsigned long long)arg1;
- (unsigned long long)variableChangeCount;

@end
