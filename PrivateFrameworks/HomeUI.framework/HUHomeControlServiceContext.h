
@interface HUHomeControlServiceContext : NSObject {
    NSString * _accessoryIdentifier;
    NSString * _accessoryName;
    NSSet * _actions;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _animationOriginRect;
    NSURL * _defaultActionURL;
    NSString * _homeIdentifier;
    NSString * _homeName;
    UIViewController * _presentingViewController;
    <SBUIRemoteAlertHostInterface> * _remoteViewControllerProxy;
    NSString * _roomIdentifier;
    NSString * _roomName;
    unsigned long long  _serviceType;
}

@property (nonatomic, retain) NSString *accessoryIdentifier;
@property (nonatomic, copy) NSString *accessoryName;
@property (nonatomic, retain) NSSet *actions;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } animationOriginRect;
@property (nonatomic, copy) NSURL *defaultActionURL;
@property (nonatomic, retain) NSString *homeIdentifier;
@property (nonatomic, copy) NSString *homeName;
@property (nonatomic) UIViewController *presentingViewController;
@property (nonatomic, retain) <SBUIRemoteAlertHostInterface> *remoteViewControllerProxy;
@property (nonatomic, retain) NSString *roomIdentifier;
@property (nonatomic, copy) NSString *roomName;
@property (nonatomic) unsigned long long serviceType;

+ (id)_homeInfoFromDefaultActionURL:(id)arg1;

- (void).cxx_destruct;
- (id)_initWithUserInfo:(id)arg1;
- (id)accessoryIdentifier;
- (id)accessoryName;
- (id)actions;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })animationOriginRect;
- (void)dealloc;
- (id)defaultActionURL;
- (id)homeIdentifier;
- (id)homeName;
- (id)initWithAlertConfigurationContext:(id)arg1;
- (id)initWithServiceType:(unsigned long long)arg1 defaultActionURL:(id)arg2;
- (id)initWithServiceType:(unsigned long long)arg1 home:(id)arg2 accessory:(id)arg3 presentingViewController:(id)arg4;
- (id)initWithServiceType:(unsigned long long)arg1 home:(id)arg2 room:(id)arg3;
- (id)initWithServiceType:(unsigned long long)arg1 homeIdentifier:(id)arg2 accessoryIdentifier:(id)arg3;
- (id)initWithServiceType:(unsigned long long)arg1 homeIdentifier:(id)arg2 roomIdentifier:(id)arg3;
- (id)presentingViewController;
- (id)remoteViewControllerProxy;
- (id)roomIdentifier;
- (id)roomName;
- (unsigned long long)serviceType;
- (void)setAccessoryIdentifier:(id)arg1;
- (void)setAccessoryName:(id)arg1;
- (void)setActions:(id)arg1;
- (void)setAnimationOriginRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)setDefaultActionURL:(id)arg1;
- (void)setHomeIdentifier:(id)arg1;
- (void)setHomeName:(id)arg1;
- (void)setPresentingViewController:(id)arg1;
- (void)setRemoteViewControllerProxy:(id)arg1;
- (void)setRoomIdentifier:(id)arg1;
- (void)setRoomName:(id)arg1;
- (void)setServiceType:(unsigned long long)arg1;
- (id)userInfo;

@end
