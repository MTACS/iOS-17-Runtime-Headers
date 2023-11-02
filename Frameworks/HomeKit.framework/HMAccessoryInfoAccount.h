
@interface HMAccessoryInfoAccount : NSObject {
    NSString * _aaAltDSID;
    NSString * _amsAltDSID;
    bool  _signedIn;
    NSString * _username;
}

@property (readonly, copy) NSString *aaAltDSID;
@property (readonly, copy) NSString *amsAltDSID;
@property (readonly) bool signedIn;
@property (readonly, copy) NSString *username;

- (void).cxx_destruct;
- (id)aaAltDSID;
- (id)amsAltDSID;
- (id)description;
- (unsigned long long)hash;
- (id)initWithProtoData:(id)arg1;
- (id)initWithProtoPayload:(id)arg1;
- (id)initWithUsername:(id)arg1 aaAltDSID:(id)arg2 amsAltDSID:(id)arg3 signedIn:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)protoData;
- (id)protoPayload;
- (bool)signedIn;
- (id)username;

@end
