
@interface FMUILocationDetailViewControllerViewOptions : NSObject {
    void rawValue;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) long long rawValue;

+ (id)default;
+ (id)messagesChatDetails;
+ (id)presentFullScreenWhenTapped;
+ (id)punchOutToFindMyWhenTapped;
+ (id)showLocateButtons;
+ (id)showLocationDetails;
+ (id)showRequestLocationButton;
+ (id)showShareLocationButton;
+ (id)spotlightWidget;
+ (id)useCompactInterface;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (id)initWithRawValue:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (long long)rawValue;

@end
