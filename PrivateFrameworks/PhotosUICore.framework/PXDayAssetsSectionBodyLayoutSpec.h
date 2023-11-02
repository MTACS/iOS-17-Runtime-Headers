
@interface PXDayAssetsSectionBodyLayoutSpec : PXFeatureSpec {
    bool  _allowsVideoPlaybackAtAnySize;
    struct { 
        union { 
            struct { 
                float topLeft; 
                float topRight; 
                float bottomLeft; 
                float bottomRight; 
            } ; 
            float byIndex[4]; 
        } ; 
    }  _bodyCornerRadius;
    double  _interitemSpacing;
    long long  _numberOfColumns;
}

@property (nonatomic, readonly) bool allowsVideoPlaybackAtAnySize;
@property (nonatomic, readonly) struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; } bodyCornerRadius;
@property (nonatomic, readonly) double interitemSpacing;
@property (nonatomic, readonly) long long numberOfColumns;

- (bool)allowsVideoPlaybackAtAnySize;
- (struct { union { struct { float x_1_2_1; float x_1_2_2; float x_1_2_3; float x_1_2_4; } x_1_1_1; float x_1_1_2[4]; } x1; })bodyCornerRadius;
- (id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2;
- (double)interitemSpacing;
- (long long)numberOfColumns;

@end
