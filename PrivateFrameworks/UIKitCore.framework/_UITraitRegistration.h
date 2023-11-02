
@interface _UITraitRegistration : NSObject <UITraitChangeRegistration> {
    SEL  _action;
    id /* block */  _handler;
    id  _target;
    bool  _targetIsSender;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end
