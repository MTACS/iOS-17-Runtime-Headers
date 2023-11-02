
@interface _STKRemoteAlertDescriptor : NSObject {
    BSAction * _BSAction;
    STKSessionAction * _action;
    NSString * _serviceIdentifier;
    NSString * _viewControllerName;
}

@property (nonatomic, readonly) BSAction *BSAction;
@property (nonatomic, readonly) STKSessionAction *action;
@property (nonatomic, readonly, copy) NSString *serviceIdentifier;
@property (getter=isValid, nonatomic, readonly) bool valid;
@property (nonatomic, readonly, copy) NSString *viewControllerName;

- (void).cxx_destruct;
- (id)BSAction;
- (id)action;
- (id)debugDescription;
- (id)description;
- (id)initWithAction:(id)arg1 viewControllerName:(id)arg2;
- (bool)isValid;
- (id)serviceIdentifier;
- (id)viewControllerName;

@end
