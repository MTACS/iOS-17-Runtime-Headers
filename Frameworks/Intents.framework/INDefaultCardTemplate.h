
@interface INDefaultCardTemplate : NSObject <INImageProxyInjecting, INKeyImageProducing, NSCopying, NSSecureCoding, REDefaultCardTemplateProperties> {
    INImage * _image;
    NSString * _subtitle;
    NSString * _title;
}

@property (readonly) INImage *_keyImage;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, copy) INImage *image;
@property (nonatomic, readonly) NSString *subtitle;
@property (nonatomic, copy) NSString *subtitle;
@property (readonly) Class superclass;
@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *title;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (long long)_compareSubProducerOne:(id)arg1 subProducerTwo:(id)arg2;
- (void)_injectProxiesForImages:(id /* block */)arg1 completion:(id /* block */)arg2;
- (id)_keyImage;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)image;
- (id)initWithCoder:(id)arg1;
- (id)initWithTitle:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setImage:(id)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)subtitle;
- (id)title;

@end
