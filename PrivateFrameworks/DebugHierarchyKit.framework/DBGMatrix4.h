
@interface DBGMatrix4 : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[4]; 
    }  _matrix4;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; } matrix4;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })matrix4;
- (id)objectValue;
- (void)setMatrix4:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[4]; })arg1;

@end
