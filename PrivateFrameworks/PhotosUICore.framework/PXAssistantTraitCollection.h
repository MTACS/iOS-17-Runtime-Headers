
@interface PXAssistantTraitCollection : NSObject <NSCopying> {
    double  _displayScale;
    bool  _isRTL;
}

@property (nonatomic, readonly) double displayScale;
@property (nonatomic, readonly) bool isRTL;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)displayScale;
- (id)init;
- (id)initWithDisplayScale:(double)arg1 isRTL:(bool)arg2;
- (bool)isRTL;

@end
