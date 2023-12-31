
@interface WBSParsecSportsImage : WBSParsecModel {
    long long  _alignment;
    WBSParsecImageRepresentation * _imageRepresentation;
    NSString * _label;
    NSString * _name;
}

@property (nonatomic, readonly) long long alignment;
@property (nonatomic, readonly) WBSParsecImageRepresentation *imageRepresentation;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *name;

+ (id)schema;

- (void).cxx_destruct;
- (long long)alignment;
- (id)imageRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)label;
- (id)name;

@end
