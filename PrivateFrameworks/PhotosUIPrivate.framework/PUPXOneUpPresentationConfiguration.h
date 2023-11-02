
@interface PUPXOneUpPresentationConfiguration : NSObject <PXOneUpPresentationConfiguration> {
    unsigned long long  _activity;
    bool  _animated;
    long long  _interactiveMode;
}

@property (nonatomic) unsigned long long activity;
@property (getter=isAnimated, nonatomic) bool animated;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long interactiveMode;
@property (nonatomic, readonly) unsigned long long pu_activity;
@property (nonatomic, readonly) long long pu_interactiveMode;
@property (readonly) Class superclass;

- (unsigned long long)activity;
- (id)init;
- (long long)interactiveMode;
- (bool)isAnimated;
- (unsigned long long)pu_activity;
- (long long)pu_interactiveMode;
- (void)setActivity:(unsigned long long)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setInteractiveMode:(long long)arg1;

@end
