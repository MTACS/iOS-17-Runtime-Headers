
@interface SPAccessoryLayoutTemplate : NSObject <NSCopying, NSSecureCoding> {
    bool  _isPrimary;
    unsigned char  _partIdentifier;
    NSString * _partName;
    NSString * _partSymbol;
    NSString * _partType;
}

@property (nonatomic) bool isPrimary;
@property (nonatomic) unsigned char partIdentifier;
@property (nonatomic, copy) NSString *partName;
@property (nonatomic, copy) NSString *partSymbol;
@property (nonatomic, copy) NSString *partType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isPrimary;
- (unsigned char)partIdentifier;
- (id)partName;
- (id)partSymbol;
- (id)partType;
- (void)setIsPrimary:(bool)arg1;
- (void)setPartIdentifier:(unsigned char)arg1;
- (void)setPartName:(id)arg1;
- (void)setPartSymbol:(id)arg1;
- (void)setPartType:(id)arg1;

@end
