
@interface CESRUserDataContactWord : NSObject <NSCopying, NSSecureCoding> {
    NSDictionary * _components;
    int  _frequency;
}

@property (nonatomic, readonly, copy) NSDictionary *components;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) int frequency;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)components;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (int)frequency;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithComponents:(id)arg1 frequency:(int)arg2;
- (bool)isEqual:(id)arg1;

@end
