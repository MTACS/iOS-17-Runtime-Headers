
@interface INIntentKeyParameter : NSObject {
    INCodableAttribute * _codableAttribute;
    INImage * _image;
    id  _value;
}

@property (nonatomic, readonly) INCodableAttribute *codableAttribute;
@property (nonatomic, readonly) INImage *image;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (id)codableAttribute;
- (id)image;
- (id)initWithCodableAttribute:(id)arg1 value:(id)arg2 image:(id)arg3;
- (id)value;

@end
