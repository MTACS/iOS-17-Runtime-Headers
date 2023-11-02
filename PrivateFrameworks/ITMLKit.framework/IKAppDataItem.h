
@interface IKAppDataItem : NSObject <NSCopying> {
    NSDictionary * _dataDictionary;
    NSString * _identifier;
    IKAppPrototypeIdentifier * _prototypeIdentifier;
    NSString * _type;
}

@property (nonatomic, readonly, copy) NSDictionary *dataDictionary;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) IKAppPrototypeIdentifier *prototypeIdentifier;
@property (nonatomic, readonly) NSString *type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataDictionary;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithType:(id)arg1 identifier:(id)arg2 prototypeIdentifier:(id)arg3 dataDictionary:(id)arg4;
- (bool)isEqual:(id)arg1;
- (id)prototypeIdentifier;
- (id)type;
- (id)valueForPropertyPath:(id)arg1;

@end
