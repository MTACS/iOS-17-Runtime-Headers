
@interface _UISegmentedControlAppearanceStorage : NSObject {
    NSMutableDictionary * _backgroundImages;
    NSMutableDictionary * _backgroundPositionAdjustmentsForBarMetrics;
    NSMutableDictionary * _contentPositionOffsets;
    NSMutableDictionary * _dividerImages;
    bool  _isTiled;
    unsigned long long  _leftCapWidth;
    bool  _legacyDontHighlight;
    bool  _legacySuppressOptionsBackground;
    NSMutableDictionary * _miniBackgroundImages;
    NSMutableDictionary * _miniContentPositionOffsets;
    NSMutableDictionary * _miniDividerImages;
    unsigned long long  _rightCapWidth;
    NSMutableDictionary * _textAttributesForState;
}

- (void).cxx_destruct;
- (id)anyDividerImage;
- (id)anyDividerImageForMini:(bool)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 isMini:(bool)arg2 withFallback:(bool)arg3;
- (double)backgroundPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2;
- (id)contentPositionOffsetForSegment:(long long)arg1 inMiniBar:(bool)arg2 noFallback:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3;
- (id)dividerImageForLeftSegmentState:(unsigned long long)arg1 rightSegmentState:(unsigned long long)arg2 isMini:(bool)arg3 withFallback:(bool)arg4;
- (id)init;
- (bool)legacySuppressOptionsBackground;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 isMini:(bool)arg3;
- (void)setBackgroundPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setContentPositionOffset:(id)arg1 forSegment:(long long)arg2 inMiniBar:(bool)arg3;
- (void)setDetail:(struct { id x1; double x2; double x3; struct { id x_4_1_1; id x_4_1_2; id x_4_1_3; id x_4_1_4; id x_4_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_4_1_6; } x4; struct { id x_5_1_1; id x_5_1_2; id x_5_1_3; id x_5_1_4; id x_5_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_5_1_6; } x5; struct { id x_6_1_1; id x_6_1_2; id x_6_1_3; id x_6_1_4; id x_6_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_6_1_6; } x6; struct { id x_7_1_1; id x_7_1_2; id x_7_1_3; id x_7_1_4; id x_7_1_5; struct CGSize { double x_6_2_1; double x_6_2_2; } x_7_1_6; } x7; bool x8; }*)arg1;
- (void)setDividerImage:(id)arg1 forLeftSegmentState:(unsigned long long)arg2 rightSegmentState:(unsigned long long)arg3 isMini:(bool)arg4;
- (void)setIsTiled:(bool)arg1 leftCapWidth:(unsigned long long)arg2 rightCapWidth:(unsigned long long)arg3;
- (void)setTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (void)takeTextAttributesFrom:(struct { id x1; id x2; id x3; id x4; id x5; struct CGSize { double x_6_1_1; double x_6_1_2; } x6; })arg1 forState:(unsigned long long)arg2;
- (id)textAttributesForState:(unsigned long long)arg1;
- (bool)wantsTrackingSuppressed;

@end
