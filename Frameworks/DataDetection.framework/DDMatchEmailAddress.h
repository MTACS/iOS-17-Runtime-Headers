
@interface DDMatchEmailAddress : DDMatch {
    NSString * _emailAddress;
    NSString * _label;
}

@property (nonatomic, readonly) NSString *emailAddress;
@property (nonatomic, readonly) NSString *label;

- (void).cxx_destruct;
- (id)emailAddress;
- (id)initWithDDScannerResult:(id)arg1;
- (id)label;

@end
