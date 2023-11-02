
@interface CVABackgroundRequestImplBase : NSObject <CVABackgroundRequest> {
    CVAMattingRequest * _mattingRequest;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) CVAMattingRequest *mattingRequest;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)mattingRequest;
- (void)setMattingRequest:(id)arg1;

@end
