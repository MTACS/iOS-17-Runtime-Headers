
@protocol TSDMasterDrawableDelegate <NSObject>

@required

- (bool)childRepIsMasterDrawable:(TSDRep *)arg1;
- (bool)childRepIsOnDocSetupCanvas:(TSDRep *)arg1;

@end
