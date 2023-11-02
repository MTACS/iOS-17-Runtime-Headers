
@interface WFMenuItem : NSObject <WFMenuElement> {
    id /* block */  _handler;
    WFIcon * _icon;
    bool  _isDestructive;
    long long  _state;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) id /* block */ handler;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) WFIcon *icon;
@property (nonatomic, readonly) bool isDestructive;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)generateAttributedStringForText:(id)arg1 font:(id)arg2 color:(id)arg3;
- (id /* block */)handler;
- (id)icon;
- (id)initWithTitle:(id)arg1 handler:(id /* block */)arg2;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 isDestructive:(bool)arg3 handler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 icon:(id)arg2 state:(long long)arg3 handler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 state:(long long)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 handler:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3 handler:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3 state:(long long)arg4 handler:(id /* block */)arg5;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 icon:(id)arg3 state:(long long)arg4 isDestructive:(bool)arg5 handler:(id /* block */)arg6;
- (id)initWithTitle:(id)arg1 subtitle:(id)arg2 state:(long long)arg3 handler:(id /* block */)arg4;
- (bool)isDestructive;
- (id)menuElementRepresentationShowingStatus:(bool)arg1;
- (long long)state;
- (id)subtitle;
- (id)title;

@end
