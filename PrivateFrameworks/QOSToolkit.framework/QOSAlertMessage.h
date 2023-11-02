
@interface QOSAlertMessage : NSObject {
    QOSAlertMessageInternal * _underlyingObject;
}

@property (readonly) QOSAlertMessageInternal *underlyingObject;

- (void).cxx_destruct;
- (id)body;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (id)title;
- (id)underlyingObject;

@end
