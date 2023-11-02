
@interface POWSTrustSecurityType : POWSTrustBaseRequestType {
    POWSTrustTimestampType * _Timestamp;
    POWSTrustUsernameTokenType * _UsernameToken;
    NSString * _mustUnderstand;
}

@property (nonatomic, retain) POWSTrustTimestampType *Timestamp;
@property (nonatomic, retain) POWSTrustUsernameTokenType *UsernameToken;
@property (nonatomic, copy) NSString *mustUnderstand;

+ (id)definition;

- (void).cxx_destruct;
- (id)Timestamp;
- (id)UsernameToken;
- (id)description;
- (id)mustUnderstand;
- (void)setMustUnderstand:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setUsernameToken:(id)arg1;

@end
