
@interface SKIDirectInvocationPayload : NSObject {
    NSString * _identifier;
    NSDictionary * _userData;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, copy) NSDictionary *userData;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
