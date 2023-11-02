
@interface _HDAuthorizationRequest : NSObject {
    id /* block */  _completionHandler;
    NSUUID * _identifier;
    NSSet * _typesToRead;
    NSSet * _typesToWrite;
}

- (void).cxx_destruct;
- (id)description;

@end
