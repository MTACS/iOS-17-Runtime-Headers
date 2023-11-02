
@interface DBGMatrix2 : NSObject <DBGValue, DBGValueJSONSerialization> {
    struct { 
        /* Warning: Unrecognized filer type: ']' using 'void*' */ void*columns[2]; 
    }  _matrix2;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; } matrix2;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withMatrix2:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg1;

- (id)JSONCompatibleRepresentation;
- (id)debugDescription;
- (id)description;
- (id)initWithMatrix2:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg1;
- (struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })matrix2;
- (id)objectValue;
- (void)setMatrix2:(struct { /* Warning: Unrecognized filer type: ']' using 'void*' */ void*x1[2]; })arg1;

@end
