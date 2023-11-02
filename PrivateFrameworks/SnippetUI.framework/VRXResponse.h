
@interface VRXResponse : NSObject {
    NSData * _model;
    long long  _responseType;
}

@property (nonatomic, readonly) NSData *model;
@property (nonatomic, readonly) long long responseType;

- (void).cxx_destruct;
- (id)initWithModel:(id)arg1 responseType:(long long)arg2;
- (id)model;
- (long long)responseType;

@end
