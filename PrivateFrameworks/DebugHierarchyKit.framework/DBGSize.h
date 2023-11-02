
@interface DBGSize : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct CGSize { 
        double width; 
        double height; 
    }  _size;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGSize { double x1; double x2; } size;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withSize:(struct CGSize { double x1; double x2; })arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithCGSize:(struct CGSize { double x1; double x2; })arg1;
- (id)objectValue;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGSize { double x1; double x2; })size;

@end
