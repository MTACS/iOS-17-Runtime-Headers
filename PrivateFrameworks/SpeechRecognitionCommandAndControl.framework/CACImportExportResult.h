
@interface CACImportExportResult : NSObject {
    NSError * _error;
    NSString * _message;
    NSString * _title;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSString *message;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (void)displayAlertForViewController:(id)arg1;
- (id)error;
- (id)initWithError:(id)arg1 title:(id)arg2 message:(id)arg3;
- (id)message;
- (void)setError:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
