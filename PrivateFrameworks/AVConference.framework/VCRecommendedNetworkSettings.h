
@interface VCRecommendedNetworkSettings : NSObject {
    unsigned int  _targetBitrateCap;
}

@property (readonly) unsigned int targetBitrateCap;

- (void)dealloc;
- (id)initWithTargetBitrateCap:(unsigned int)arg1;
- (unsigned int)targetBitrateCap;

@end
