
@interface ATXNotificationsContent : NSObject {
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithContent:(id)arg1 title:(id)arg2;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
