
@interface SCRCArgumentHolder : NSObject {
    SEL  _action;
    NSString * _argument;
    NSString * _argumentDescription;
    NSString * _option;
    bool  _required;
    id  _target;
}

@property (nonatomic, readonly) SEL action;
@property (nonatomic, copy) NSString *argument;
@property (nonatomic, readonly, copy) NSString *argumentDescription;
@property (nonatomic, readonly, copy) NSString *option;
@property (nonatomic, readonly) bool required;
@property (nonatomic, readonly) id target;

- (void).cxx_destruct;
- (SEL)action;
- (id)argument;
- (id)argumentDescription;
- (long long)compare:(id)arg1;
- (id)init;
- (id)initWithArgument:(id)arg1 option:(id)arg2 description:(id)arg3 target:(id)arg4 action:(SEL)arg5 required:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)option;
- (bool)process;
- (bool)required;
- (void)setArgument:(id)arg1;
- (id)target;

@end
