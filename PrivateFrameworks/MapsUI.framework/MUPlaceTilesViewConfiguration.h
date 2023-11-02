
@interface MUPlaceTilesViewConfiguration : NSObject {
    MUPlaceTileCellConfiguration * _cellConfiguration;
    unsigned long long  _numberOfRows;
    bool  _vertical;
}

@property (nonatomic, readonly) MUPlaceTileCellConfiguration *cellConfiguration;
@property (nonatomic) unsigned long long numberOfRows;
@property (nonatomic, readonly) bool shouldDrawPlatter;
@property (getter=isVertical, nonatomic) bool vertical;

+ (id)annotatedListConfiguration;
+ (id)configurationFromModuleConfiguration:(id)arg1;
+ (id)hikingTrailsConfiguration;

- (void).cxx_destruct;
- (id)cellConfiguration;
- (id)init;
- (bool)isVertical;
- (unsigned long long)numberOfRows;
- (void)setNumberOfRows:(unsigned long long)arg1;
- (void)setVertical:(bool)arg1;
- (bool)shouldDrawPlatter;

@end
