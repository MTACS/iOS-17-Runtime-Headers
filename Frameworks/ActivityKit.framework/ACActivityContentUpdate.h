
@interface ACActivityContentUpdate : NSObject {
    ACActivityContent * _content;
    ACActivityDescriptor * _descriptor;
    NSString * _identifier;
    long long  _state;
}

@property (nonatomic, readonly, copy) ACActivityContent *content;
@property (nonatomic, readonly, copy) ACActivityDescriptor *descriptor;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (id)content;
- (id)descriptor;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 descriptor:(id)arg2 state:(long long)arg3 content:(id)arg4;
- (long long)state;

@end
