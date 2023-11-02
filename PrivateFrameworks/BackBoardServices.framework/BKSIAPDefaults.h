
@interface BKSIAPDefaults : BSAbstractDefaultDomain

@property (nonatomic, readonly) NSString *videoTVOutReservedForIPodOut;
@property (nonatomic, readonly) NSString *videoTVOutReservedForRemoteUI;
@property (nonatomic, readonly) NSString *videoTVOutSignal;
@property (nonatomic, retain) NSString *videoTVOutSystem;

- (void)_bindAndRegisterDefaults;
- (id)init;

@end
