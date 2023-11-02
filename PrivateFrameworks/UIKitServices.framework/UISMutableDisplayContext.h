
@interface UISMutableDisplayContext : UISDisplayContext

@property (nonatomic) unsigned long long artworkSubtype;
@property (nonatomic, retain) FBSDisplayConfiguration *displayConfiguration;
@property (nonatomic, retain) UISApplicationSupportDisplayEdgeInfo *displayEdgeInfo;
@property (nonatomic, retain) UISDisplayShape *exclusionArea;
@property (nonatomic) unsigned long long userInterfaceStyle;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)setArtworkSubtype:(unsigned long long)arg1;
- (void)setDisplayConfiguration:(id)arg1;
- (void)setDisplayEdgeInfo:(id)arg1;
- (void)setExclusionArea:(id)arg1;
- (void)setUserInterfaceStyle:(unsigned long long)arg1;

@end
