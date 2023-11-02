
@interface HKInfographicButtonItem : NSObject <HKInfographicItem> {
    id /* block */  _buttonTapHandler;
    UIButtonConfiguration * _configuration;
}

@property (nonatomic, copy) id /* block */ buttonTapHandler;
@property (nonatomic, copy) UIButtonConfiguration *configuration;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id /* block */)buttonTapHandler;
- (id)configuration;
- (id)initWithConfiguration:(id)arg1 buttonTapHandler:(id /* block */)arg2;
- (void)setButtonTapHandler:(id /* block */)arg1;
- (void)setConfiguration:(id)arg1;

@end
