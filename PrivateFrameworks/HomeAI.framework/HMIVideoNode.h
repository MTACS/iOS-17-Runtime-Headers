
@interface HMIVideoNode : HMFObject {
    NSError * _error;
    long long  _status;
}

@property (readonly) NSError *error;
@property (readonly) long long status;

- (void).cxx_destruct;
- (id)error;
- (long long)status;

@end
