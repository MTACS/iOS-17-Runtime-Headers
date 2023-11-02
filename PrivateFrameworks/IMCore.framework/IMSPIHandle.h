
@interface IMSPIHandle : NSObject {
    NSString * _address;
    NSString * _countryCode;
    bool  _haveFetchedIMHandle;
    IMHandle * _imHandle;
    bool  _isMe;
}

@property (retain) NSString *address;
@property (readonly) NSString *businessName;
@property (readonly) NSString *cnContactID;
@property (retain) NSString *countryCode;
@property (readonly) NSString *displayName;
@property (readonly) bool isBusiness;
@property bool isMe;

- (void).cxx_destruct;
- (id)address;
- (id)businessName;
- (id)cnContactID;
- (id)countryCode;
- (id)description;
- (id)displayName;
- (id)handle;
- (unsigned long long)hash;
- (id)initWithAddress:(id)arg1 countryCode:(id)arg2 isMe:(bool)arg3;
- (bool)isBusiness;
- (bool)isEqual:(id)arg1;
- (bool)isMe;
- (void)setAddress:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setIsMe:(bool)arg1;

@end
