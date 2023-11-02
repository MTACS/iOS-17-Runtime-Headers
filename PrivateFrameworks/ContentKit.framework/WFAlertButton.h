
@interface WFAlertButton : NSObject {
    WFAlert * _alert;
    NSArray * _alternativeSpeakableMatches;
    id /* block */  _handler;
    bool  _preferred;
    long long  _style;
    NSString * _title;
}

@property (nonatomic) WFAlert *alert;
@property (nonatomic, copy) NSArray *alternativeSpeakableMatches;
@property (nonatomic, readonly, copy) id /* block */ handler;
@property (getter=isPreferred, nonatomic, readonly) bool preferred;
@property (nonatomic, readonly) long long style;
@property (nonatomic, readonly, copy) NSString *title;

+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)buttonWithTitle:(id)arg1 style:(long long)arg2 preferred:(bool)arg3 handler:(id /* block */)arg4;
+ (id)cancelButtonWithHandler:(id /* block */)arg1;
+ (id)cancelButtonWithTarget:(id)arg1 action:(SEL)arg2;
+ (id)okButtonWithHandler:(id /* block */)arg1;
+ (id)okButtonWithTarget:(id)arg1 action:(SEL)arg2;

- (void).cxx_destruct;
- (id)alert;
- (id)alternativeSpeakableMatches;
- (id /* block */)handler;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3 preferred:(bool)arg4;
- (bool)isPreferred;
- (void)setAlert:(id)arg1;
- (void)setAlternativeSpeakableMatches:(id)arg1;
- (long long)style;
- (id)title;

@end
