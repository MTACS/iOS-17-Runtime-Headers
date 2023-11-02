
@interface VCMediaNegotiatorBandwidthConfiguration : NSObject {
    int  _connectionType;
    bool  _isDefaultMode;
    unsigned int  _maxBandwidth;
    int  _mode;
}

@property (nonatomic) int connectionType;
@property (nonatomic) bool isDefaultMode;
@property (nonatomic) unsigned int maxBandwidth;
@property (nonatomic) int mode;

- (int)connectionType;
- (id)initWithConnectionType:(int)arg1 maxBandwidth:(unsigned int)arg2;
- (id)initWithMode:(int)arg1 connectionType:(int)arg2 maxBandwidth:(unsigned int)arg3;
- (bool)isDefaultMode;
- (bool)isEqual:(id)arg1;
- (unsigned int)maxBandwidth;
- (int)mode;
- (void)setConnectionType:(int)arg1;
- (void)setIsDefaultMode:(bool)arg1;
- (void)setMaxBandwidth:(unsigned int)arg1;
- (void)setMode:(int)arg1;

@end
