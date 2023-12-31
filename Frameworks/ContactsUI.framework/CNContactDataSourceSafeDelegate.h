
@interface CNContactDataSourceSafeDelegate : NSObject <CNContactDataSourceDelegate> {
    <CNContactDataSourceDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CNContactDataSourceDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)contactDataSourceDidChange:(id)arg1;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;

@end
