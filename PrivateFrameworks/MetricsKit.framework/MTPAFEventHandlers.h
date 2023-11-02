
@interface MTPAFEventHandlers : MTEventHandlers

@property (nonatomic, readonly) MTMediaActivityEventHandler *playStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *playStop;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStart;
@property (nonatomic, readonly) MTMediaActivityEventHandler *seekStop;

- (Class)baseDataProviderClass;
- (id)playStart;
- (id)playStop;
- (void)registerDefaultEventHandlers;
- (id)seekStart;
- (id)seekStop;

@end
