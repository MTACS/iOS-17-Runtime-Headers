
@interface NMAPIModelObjectRequest : NMAPIRequest {
    MPModelObject * _modelObject;
}

@property (nonatomic, retain) MPModelObject *modelObject;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithModelObject:(id)arg1;
- (id)modelObject;
- (Class)responseParserClass;
- (void)setModelObject:(id)arg1;
- (id)urlComponentsWithStoreURLBag:(id)arg1 error:(id*)arg2;

@end
