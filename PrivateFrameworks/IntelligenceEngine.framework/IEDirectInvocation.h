
@interface IEDirectInvocation : NSObject {
    NSString * _identifier;
    NSDictionary * _userData;
}

@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSDictionary *userData;

- (void).cxx_destruct;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifier:(id)arg1 withUserData:(id)arg2;
- (void)setIdentifier:(id)arg1;
- (void)setUserData:(id)arg1;
- (id)userData;

@end
