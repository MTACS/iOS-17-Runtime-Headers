
@interface HMDDataStreamPendingRequest : NSObject {
    id /* block */  _callback;
    NSNumber * _identifier;
    NSDictionary * _payload;
    NSString * _protocol;
    NSString * _topic;
}

@property (nonatomic, readonly) id /* block */ callback;
@property (nonatomic, readonly) NSNumber *identifier;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSString *topic;

- (void).cxx_destruct;
- (id /* block */)callback;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 protocol:(id)arg2 topic:(id)arg3 payload:(id)arg4 callback:(id /* block */)arg5;
- (bool)isEqual:(id)arg1;
- (id)payload;
- (id)protocol;
- (id)topic;

@end
