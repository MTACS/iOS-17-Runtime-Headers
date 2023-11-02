
@interface AEGridConfiguration : NSObject {
    bool  _oversized;
    unsigned long long  _rowCount;
    double  _tileHeight;
}

@property (getter=isOversized, nonatomic) bool oversized;
@property (nonatomic) unsigned long long rowCount;
@property (nonatomic) double tileHeight;

+ (id)configurationForEnvironment:(id)arg1;

- (bool)isOversized;
- (unsigned long long)rowCount;
- (void)setOversized:(bool)arg1;
- (void)setRowCount:(unsigned long long)arg1;
- (void)setTileHeight:(double)arg1;
- (double)tileHeight;

@end
