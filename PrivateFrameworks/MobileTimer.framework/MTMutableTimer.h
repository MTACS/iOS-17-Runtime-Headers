
@interface MTMutableTimer : MTTimer

@property (nonatomic, copy) NSDate *dismissedDate;
@property (nonatomic) double duration;
@property (nonatomic, copy) NSDate *firedDate;
@property (nonatomic, copy) NSDate *lastModifiedDate;
@property (nonatomic, copy) NSDictionary *siriContext;
@property (nonatomic, copy) MTSound *sound;
@property (nonatomic) unsigned long long state;
@property (nonatomic, copy) NSString *title;

// Image: /System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer

- (id)copyWithZone:(struct _NSZone { }*)arg1;

// Image: /System/Library/PrivateFrameworks/Home.framework/Home

- (void)hf_moveToRoom:(id)arg1 withMediaProfileContainer:(id)arg2;

@end
