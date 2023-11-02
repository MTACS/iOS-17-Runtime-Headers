
@interface CPLProxyLibraryManagerSyncOutstandingInvocation : NSObject {
    bool  _didFinish;
    NSDictionary * _errors;
}

@property (nonatomic) bool didFinish;
@property (nonatomic, retain) NSDictionary *errors;

- (void).cxx_destruct;
- (id)description;
- (bool)didFinish;
- (id)errors;
- (void)setDidFinish:(bool)arg1;
- (void)setErrors:(id)arg1;

@end
