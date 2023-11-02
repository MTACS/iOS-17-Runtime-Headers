
@interface DBGPoint : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _point;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct CGPoint { double x1; double x2; } point;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withPoint:(struct CGPoint { double x1; double x2; })arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithCGPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)objectValue;
- (struct CGPoint { double x1; double x2; })point;
- (void)setPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
