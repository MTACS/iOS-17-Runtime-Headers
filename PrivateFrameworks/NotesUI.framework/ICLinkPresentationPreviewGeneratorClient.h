
@interface ICLinkPresentationPreviewGeneratorClient : NSObject {
    NSXPCConnection * _connectionToService;
}

@property (nonatomic, retain) NSXPCConnection *connectionToService;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)connectionToService;
- (struct CGSize { double x1; double x2; })drawPreviewStartingAtPoint:(struct CGPoint { double x1; double x2; })arg1 attachment:(id)arg2 insideSystemPaper:(bool)arg3;
- (id)init;
- (void)setConnectionToService:(id)arg1;

@end
