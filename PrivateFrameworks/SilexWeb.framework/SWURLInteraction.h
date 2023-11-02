
@interface SWURLInteraction : NSObject <SWInteraction> {
    NSURL * _URL;
    <SWNavigationManager> * _navigationManager;
}

@property (nonatomic, readonly) NSURL *URL;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <SWNavigationManager> *navigationManager;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)URL;
- (id)description;
- (id)initWithURL:(id)arg1 navigationManager:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)navigationManager;
- (void)perform;
- (unsigned long long)type;

@end
