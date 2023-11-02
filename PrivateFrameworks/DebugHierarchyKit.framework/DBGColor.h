
@interface DBGColor : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct CGColor { } * _CGColor;
    NSString * _catalogName;
    NSString * _colorName;
}

@property (readonly) struct CGColor { }*CGColor;
@property (readonly) NSString *catalogName;
@property (readonly) NSString *colorName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withCGColor:(struct CGColor { }*)arg1 colorName:(id)arg2 catalogName:(id)arg3;

- (void).cxx_destruct;
- (struct CGColor { }*)CGColor;
- (id)JSONCompatibleRepresentation;
- (id)catalogName;
- (id)colorName;
- (void)dealloc;
- (id)initWithCGColor:(struct CGColor { }*)arg1 colorName:(id)arg2 catalogName:(id)arg3;
- (id)objectValue;

@end
