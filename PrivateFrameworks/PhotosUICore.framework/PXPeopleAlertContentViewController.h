
@interface PXPeopleAlertContentViewController : UIViewController {
    NSString * _message;
    PHPerson * _person;
}

@property (nonatomic, readonly) NSString *message;
@property (nonatomic, readonly) PHPerson *person;

- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1 message:(id)arg2;
- (id)message;
- (id)person;
- (void)viewWillAppear:(bool)arg1;

@end
