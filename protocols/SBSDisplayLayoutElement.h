
@protocol SBSDisplayLayoutElement <NSObject>

@required

- (bool)isSpringBoardElement;
- (long long)layoutRole;
- (bool)sb_isStashedPIP;
- (bool)sb_isTransitioning;

@end
