
@interface PXStoryBufferingStatusViewConfiguration : NSObject <PXGViewUserData> {
    bool  _wantsBackground;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) bool wantsBackground;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)setWantsBackground:(bool)arg1;
- (bool)wantsBackground;

@end
