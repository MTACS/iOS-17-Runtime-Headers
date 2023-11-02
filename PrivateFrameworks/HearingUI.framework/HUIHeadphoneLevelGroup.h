
@interface HUIHeadphoneLevelGroup : UIView {
    NSMutableArray * _inactiveLevels;
    bool  _isRTL;
    NSMutableArray * _levels;
    unsigned long long  _pipFlagIndex;
}

@property (nonatomic, retain) NSMutableArray *inactiveLevels;
@property (nonatomic, readonly) bool isRTL;
@property (nonatomic, retain) NSMutableArray *levels;
@property (nonatomic, readonly) unsigned long long pipFlagIndex;

- (void).cxx_destruct;
- (void)dealloc;
- (id)inactiveLevels;
- (id)init;
- (bool)isRTL;
- (void)layoutLevels;
- (void)layoutSubviews;
- (id)levels;
- (unsigned long long)pipFlagIndex;
- (void)setInactiveLevels:(id)arg1;
- (void)setLevels:(id)arg1;
- (void)updateWithExposure:(double)arg1 withThreshold:(unsigned long long)arg2;

@end
