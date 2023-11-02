
@interface MFDatePickerItemIdentifier : NSObject <NSCopying> {
    NSUUID * _identifier;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSUUID *identifier;
@property (nonatomic, readonly) unsigned long long type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithIdentifier:(id)arg1 type:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)type;

@end
