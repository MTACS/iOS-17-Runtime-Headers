
@interface PKProtobufShippingMethods : PBCodable <NSCopying> {
    PKProtobufShippingMethod * _defaultMethod;
    NSMutableArray * _methods;
}

@property (nonatomic, retain) PKProtobufShippingMethod *defaultMethod;
@property (nonatomic, readonly) bool hasDefaultMethod;
@property (nonatomic, retain) NSMutableArray *methods;

+ (Class)methodsType;

- (void).cxx_destruct;
- (void)addMethods:(id)arg1;
- (void)clearMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)defaultMethod;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasDefaultMethod;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)methods;
- (id)methodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)methodsCount;
- (bool)readFrom:(id)arg1;
- (void)setDefaultMethod:(id)arg1;
- (void)setMethods:(id)arg1;
- (void)writeTo:(id)arg1;

@end
