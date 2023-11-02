
@protocol SBSystemActionCoordinatedElementPreviewing <SBSystemApertureElement>

@required

- (bool)isExpanding;
- (bool)isPreviewing;
- (bool)isUrgent;
- (long long)layoutMode;

@end
