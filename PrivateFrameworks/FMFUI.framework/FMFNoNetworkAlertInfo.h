
@interface FMFNoNetworkAlertInfo : NSObject {
    NSURL * _actionURL;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSURL *actionURL;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)actionURL;
- (id)message;
- (void)setActionURL:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
