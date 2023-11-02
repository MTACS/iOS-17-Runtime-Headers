
@interface AKURLRequestApprover : NSObject {
    NSArray * _whiteListedPaths;
}

- (void).cxx_destruct;
- (bool)_matchInputAgainstPaths:(id)arg1;
- (id)initWithWhitelistedPaths:(id)arg1;
- (bool)shouldAllowRequest:(id)arg1;

@end
