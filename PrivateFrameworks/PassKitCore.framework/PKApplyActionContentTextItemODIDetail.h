
@interface PKApplyActionContentTextItemODIDetail : NSObject <NSCopying, PKApplyODIAttributesDictionaryProtocol, PKIdentifiable> {
    NSString * _odiAttribute;
    NSString * _odiValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) <NSCopying> *identifier;
@property (nonatomic, readonly, copy) NSString *odiAttribute;
@property (nonatomic, readonly, copy) NSString *odiValue;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)identifier;
- (id)initWithDictionary:(id)arg1;
- (id)odiAttribute;
- (id)odiAttributesDictionary;
- (id)odiValue;

@end
