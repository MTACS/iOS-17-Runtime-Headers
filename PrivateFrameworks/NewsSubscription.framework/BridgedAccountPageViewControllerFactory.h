
@interface BridgedAccountPageViewControllerFactory : NSObject <SKAccountPageViewControllerDelegate> {
    <SKAccountPageViewControllerDelegate> * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SKAccountPageViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)createAccountPageViewControllerFor:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
