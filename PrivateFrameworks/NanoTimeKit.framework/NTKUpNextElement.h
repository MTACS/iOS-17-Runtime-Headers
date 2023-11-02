
@interface NTKUpNextElement : NSObject {
    REElement * _element;
    NSString * _elementIdentifier;
}

@property (nonatomic, retain) REElement *element;
@property (nonatomic, readonly) NSString *elementIdentifier;

+ (id)elementWithREElement:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)element;
- (id)elementIdentifier;
- (unsigned long long)hash;
- (id)initWithREElement:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setElement:(id)arg1;

@end
