
@interface PKPushCredentials : NSObject {
    NSData * _token;
    NSString * _type;
}

@property (copy) NSData *token;
@property (copy) NSString *type;

- (void).cxx_destruct;
- (void)setToken:(id)arg1;
- (void)setType:(id)arg1;
- (id)token;
- (id)type;

@end
