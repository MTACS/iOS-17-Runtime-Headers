
@interface WFNotificationActionAlert : NSObject {
    NSString * _body;
    NSString * _title;
}

@property (nonatomic, readonly, copy) NSString *body;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id)body;
- (id)initWithTitle:(id)arg1 body:(id)arg2;
- (id)title;

@end
