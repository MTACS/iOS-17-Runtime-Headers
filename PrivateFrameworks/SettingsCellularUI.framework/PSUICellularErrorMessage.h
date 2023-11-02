
@interface PSUICellularErrorMessage : NSObject {
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)message;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
