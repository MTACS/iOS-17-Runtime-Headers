
@interface QOSAlertMessageInternal : NSObject {
    void body;
    void title;
}

@property (nonatomic, readonly) NSString *body;
@property (nonatomic, readonly) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)init;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (id)title;

@end
