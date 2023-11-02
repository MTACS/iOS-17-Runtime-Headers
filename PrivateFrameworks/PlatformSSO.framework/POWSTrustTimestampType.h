
@interface POWSTrustTimestampType : POWSTrustBaseRequestType {
    NSDate * _Created;
    NSDate * _Expires;
    NSString * _Id;
}

@property (nonatomic, retain) NSDate *Created;
@property (nonatomic, retain) NSDate *Expires;
@property (nonatomic, copy) NSString *Id;

+ (id)definition;

- (void).cxx_destruct;
- (id)Created;
- (id)Expires;
- (id)Id;
- (id)description;
- (void)setCreated:(id)arg1;
- (void)setExpires:(id)arg1;
- (void)setId:(id)arg1;

@end
