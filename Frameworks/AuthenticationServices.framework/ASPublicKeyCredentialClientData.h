
@interface ASPublicKeyCredentialClientData : NSObject {
    NSData * _challenge;
    long long  _crossOrigin;
    NSString * _origin;
    NSString * _topOrigin;
}

@property (nonatomic, retain) NSData *challenge;
@property (nonatomic) long long crossOrigin;
@property (nonatomic, retain) NSString *origin;
@property (nonatomic, retain) NSString *topOrigin;

- (void).cxx_destruct;
- (id)challenge;
- (long long)crossOrigin;
- (id)initWithChallenge:(id)arg1 origin:(id)arg2;
- (id)jsonForOperationType:(long long)arg1;
- (id)origin;
- (void)setChallenge:(id)arg1;
- (void)setCrossOrigin:(long long)arg1;
- (void)setOrigin:(id)arg1;
- (void)setTopOrigin:(id)arg1;
- (id)topOrigin;

@end
