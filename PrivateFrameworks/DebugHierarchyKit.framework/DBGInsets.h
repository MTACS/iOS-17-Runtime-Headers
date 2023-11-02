
@interface DBGInsets : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct DBGEdgeInsets { 
        double top; 
        double leading; 
        double bottom; 
        double trailing; 
    }  _edgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property struct DBGEdgeInsets { double x1; double x2; double x3; double x4; } edgeInsets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withEdgeInsets:(struct DBGEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (struct DBGEdgeInsets { double x1; double x2; double x3; double x4; })edgeInsets;
- (id)initWithEdgeInsets:(struct DBGEdgeInsets { double x1; double x2; double x3; double x4; })arg1;
- (id)objectValue;
- (void)setEdgeInsets:(struct DBGEdgeInsets { double x1; double x2; double x3; double x4; })arg1;

@end
