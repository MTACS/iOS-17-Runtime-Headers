
@interface SFAuthenticateAccountInfo : NSObject {
    NSString * _altDSID;
    unsigned int  _type;
}

@property (nonatomic, readonly) NSString *altDSID;
@property (nonatomic, readonly) unsigned int type;

- (void).cxx_destruct;
- (id)altDSID;
- (id)description;
- (id)initWithType:(unsigned int)arg1 altDSID:(id)arg2;
- (unsigned int)type;

@end
