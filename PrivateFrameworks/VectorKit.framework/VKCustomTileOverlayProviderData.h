
@interface VKCustomTileOverlayProviderData : NSObject {
    double  _alpha;
    <VKCustomTileOverlayProviderDelegate> * _delegate;
    long long  _desiredDisplayRate;
    unsigned int  _maximumZ;
    unsigned int  _minimumZ;
    unsigned int  _providerID;
    unsigned int  _tileSize;
}

@property (nonatomic) double alpha;
@property (nonatomic) <VKCustomTileOverlayProviderDelegate> *delegate;
@property (nonatomic) unsigned long long desiredDisplayRate;
@property (nonatomic, readonly) unsigned int maximumZ;
@property (nonatomic, readonly) unsigned int minimumZ;
@property (nonatomic, readonly) unsigned int providerID;
@property (nonatomic, readonly) unsigned int tileSize;

- (void).cxx_destruct;
- (double)alpha;
- (id)delegate;
- (unsigned long long)desiredDisplayRate;
- (id)initWithProviderID:(unsigned int)arg1 tileSize:(unsigned int)arg2 minimumZ:(unsigned int)arg3 maximumZ:(unsigned int)arg4;
- (unsigned int)maximumZ;
- (unsigned int)minimumZ;
- (unsigned int)providerID;
- (void)setAlpha:(double)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDesiredDisplayRate:(unsigned long long)arg1;
- (unsigned int)tileSize;

@end
