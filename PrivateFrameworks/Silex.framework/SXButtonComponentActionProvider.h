
@interface SXButtonComponentActionProvider : NSObject <SXButtonComponentActionProvider> {
    <SXAction> * _action;
}

@property (nonatomic, readonly) <SXAction> *action;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)action;
- (id)initWithAction:(id)arg1;

@end
