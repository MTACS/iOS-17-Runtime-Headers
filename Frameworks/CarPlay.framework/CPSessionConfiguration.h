
@interface CPSessionConfiguration : NSObject <CARSessionObserving> {
    unsigned long long  _contentStyle;
    CARSessionStatus * _currentStatus;
    <CPSessionConfigurationDelegate> * _delegate;
    unsigned long long  _limitedUserInterfaces;
    CPSTemplateEnvironment * _templateEnvironment;
}

@property (nonatomic) unsigned long long contentStyle;
@property (nonatomic, retain) CARSessionStatus *currentStatus;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CPSessionConfigurationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long limitedUserInterfaces;
@property (readonly) Class superclass;
@property (nonatomic) CPSTemplateEnvironment *templateEnvironment;

- (void).cxx_destruct;
- (void)_contentStyleUpdated:(id)arg1;
- (void)_limitedUIDidChange:(id)arg1;
- (void)_updateContentStyleWithScene:(id)arg1;
- (void)_updateLimitedUIStatus;
- (unsigned long long)contentStyle;
- (unsigned long long)convertLimitableUserInterfaces:(unsigned long long)arg1;
- (id)currentStatus;
- (void)dealloc;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (id)initWithDelegate:(id)arg1 templateEnvironment:(id)arg2;
- (unsigned long long)limitedUserInterfaces;
- (void)sessionDidConnect:(id)arg1;
- (void)setContentStyle:(unsigned long long)arg1;
- (void)setCurrentStatus:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setLimitedUserInterfaces:(unsigned long long)arg1;
- (void)setTemplateEnvironment:(id)arg1;
- (id)templateEnvironment;

@end
