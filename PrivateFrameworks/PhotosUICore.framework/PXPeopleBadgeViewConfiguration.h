
@interface PXPeopleBadgeViewConfiguration : NSObject <PXGViewUserData> {
    <PXPeopleBadgeViewDelegate> * _badgeViewDelegate;
    double  _displayScale;
    long long  _state;
}

@property (nonatomic, readonly) <PXPeopleBadgeViewDelegate> *badgeViewDelegate;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double displayScale;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)badgeViewDelegate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)displayScale;
- (id)initWithState:(long long)arg1 displayScale:(double)arg2 badgeViewDelegate:(id)arg3;
- (long long)state;

@end
