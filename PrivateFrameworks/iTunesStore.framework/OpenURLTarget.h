
@interface OpenURLTarget : NSObject {
    unsigned int  _applicationState;
    struct { 
        NSString *clientIdentifier; 
        NSString *normalScheme; 
        NSString *secureScheme; 
    }  _targetData;
    long long  _targetIndex;
}

- (long long)compare:(id)arg1;
- (id)copyURLForURL:(id)arg1;
- (id)description;
- (id)init;
- (id)initWithTargetIdentifier:(id)arg1;

@end
