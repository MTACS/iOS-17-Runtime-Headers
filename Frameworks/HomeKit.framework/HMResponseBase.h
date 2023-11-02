
@interface HMResponseBase : NSObject {
    NSError * _error;
    HMRequestBase * _request;
    <NSCopying><NSObject> * _value;
}

@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) HMRequestBase *request;
@property (nonatomic, readonly) <NSCopying><NSObject> *value;

- (void).cxx_destruct;
- (id)error;
- (id)initWithRequest:(id)arg1 error:(id)arg2;
- (id)initWithRequest:(id)arg1 value:(id)arg2 error:(id)arg3;
- (id)request;
- (void)setRequest:(id)arg1;
- (id)value;

@end
