
@interface _CPStruct : PBCodable <NSSecureCoding, _CPStruct> {
    NSDictionary * _intKeyFields;
    NSDictionary * _stringKeyFields;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSDictionary *intKeyFields;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSDictionary *stringKeyFields;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)getIntKeyFields:(id*)arg1 forKey:(int)arg2;
- (bool)getStringKeyFields:(id*)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (id)initWithFacade:(id)arg1;
- (id)intKeyFields;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setIntKeyFields:(id)arg1;
- (void)setIntKeyFields:(id)arg1 forKey:(int)arg2;
- (void)setStringKeyFields:(id)arg1;
- (void)setStringKeyFields:(id)arg1 forKey:(id)arg2;
- (id)stringKeyFields;
- (void)writeTo:(id)arg1;

@end