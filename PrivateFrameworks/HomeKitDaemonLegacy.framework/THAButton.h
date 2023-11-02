
@interface THAButton : NSObject {
    unsigned char  _identifier;
    unsigned long long  _type;
}

@property (nonatomic) unsigned char identifier;
@property (nonatomic) unsigned long long type;

- (id)description;
- (unsigned long long)hash;
- (unsigned char)identifier;
- (id)initWithType:(unsigned long long)arg1 identifier:(unsigned char)arg2;
- (bool)isEqual:(id)arg1;
- (void)setIdentifier:(unsigned char)arg1;
- (void)setType:(unsigned long long)arg1;
- (unsigned long long)type;

@end
