
@interface SOKerberosCredential : NSObject {
    unsigned int  _lifetime;
    NSString * _name;
    NSString * _uuid;
}

@property unsigned int lifetime;
@property (retain) NSString *name;
@property (retain) NSString *uuid;

- (void).cxx_destruct;
- (id)init;
- (unsigned int)lifetime;
- (id)name;
- (void)setLifetime:(unsigned int)arg1;
- (void)setName:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end
