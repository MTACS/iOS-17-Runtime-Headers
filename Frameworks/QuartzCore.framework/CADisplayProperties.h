
@interface CADisplayProperties : NSObject {
    unsigned int  _connectionSeed;
    CADisplayMode * _currentMode;
    bool  _dmrrEnabled;
    struct CGSize { 
        double width; 
        double height; 
    }  _logicalScale;
    unsigned int  _mask;
    NSString * _overscanAdjustment;
    unsigned int  _pointScale;
}

@property (nonatomic) unsigned int connectionSeed;
@property (nonatomic, retain) CADisplayMode *currentMode;
@property (nonatomic) bool dmrrEnabled;
@property (nonatomic) struct CGSize { double x1; double x2; } logicalScale;
@property (nonatomic, copy) NSString *overscanAdjustment;
@property (nonatomic) unsigned long long pointScale;
@property (nonatomic) unsigned int updateMask;

- (void)clearUpdateMask;
- (unsigned int)connectionSeed;
- (id)currentMode;
- (void)dealloc;
- (bool)dmrrEnabled;
- (id)init;
- (struct CGSize { double x1; double x2; })logicalScale;
- (bool)needsUpdateForField:(unsigned int)arg1;
- (id)overscanAdjustment;
- (unsigned long long)pointScale;
- (void)setConnectionSeed:(unsigned int)arg1;
- (void)setCurrentMode:(id)arg1;
- (void)setDmrrEnabled:(bool)arg1;
- (void)setLogicalScale:(struct CGSize { double x1; double x2; })arg1;
- (void)setOverscanAdjustment:(id)arg1;
- (void)setPointScale:(unsigned long long)arg1;
- (void)setUpdateMask:(unsigned int)arg1;
- (unsigned int)updateMask;

@end
