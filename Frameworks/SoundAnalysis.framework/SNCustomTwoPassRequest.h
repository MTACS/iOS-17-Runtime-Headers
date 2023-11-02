
@interface SNCustomTwoPassRequest : NSObject <SNTwoPassRequest> {
    id /* block */  _createSecondPassControllerFunction;
    SNTwoPassConfiguration * _twoPassConfiguration;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) SNTwoPassConfiguration *twoPassConfiguration;

- (void).cxx_destruct;
- (id)createSecondPassController;
- (id)twoPassConfiguration;

@end
