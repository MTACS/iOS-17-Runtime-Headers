
@interface WFRemoteWebSheetViewControllerErrorContext : NSObject <WFRemoteWebSheetViewControllerEventContext> {
    NSError * error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSError *error;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)error;
- (void)setError:(id)arg1;

@end
