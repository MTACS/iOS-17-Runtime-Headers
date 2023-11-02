
@interface _ICContactRecord : NSObject {
    unsigned char  _changeType;
    _ICContact * _contact;
    NSString * _identifier;
    unsigned char  _source;
}

@property (nonatomic, readonly) unsigned char changeType;
@property (nonatomic, readonly) _ICContact *contact;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) unsigned char source;

- (void).cxx_destruct;
- (unsigned char)changeType;
- (id)contact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 contact:(id)arg2 changeType:(unsigned char)arg3 source:(unsigned char)arg4;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToContactRecord:(id)arg1;
- (unsigned char)source;

@end
