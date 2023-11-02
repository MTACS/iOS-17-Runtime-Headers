
@interface MUPlaceTileCellConfiguration : NSObject {
    bool  _showCuratedPhoto;
    bool  _showIcon;
    long long  _variant;
}

@property (nonatomic) bool showCuratedPhoto;
@property (nonatomic) bool showIcon;
@property (nonatomic) long long variant;

- (void)setShowCuratedPhoto:(bool)arg1;
- (void)setShowIcon:(bool)arg1;
- (void)setVariant:(long long)arg1;
- (bool)showCuratedPhoto;
- (bool)showIcon;
- (long long)variant;

@end
