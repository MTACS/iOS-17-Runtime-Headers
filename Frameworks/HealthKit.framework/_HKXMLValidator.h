
@interface _HKXMLValidator : NSObject {
    struct _xmlSchema { char *x1; char *x2; char *x3; char *x4; struct _xmlDoc {} *x5; struct _xmlSchemaAnnot {} *x6; int x7; struct _xmlHashTable {} *x8; struct _xmlHashTable {} *x9; struct _xmlHashTable {} *x10; struct _xmlHashTable {} *x11; struct _xmlHashTable {} *x12; struct _xmlHashTable {} *x13; void *x14; struct _xmlHashTable {} *x15; struct _xmlDict {} *x16; void *x17; int x18; int x19; struct _xmlHashTable {} *x20; void *x21; } * _xsdSchema;
}

+ (id)validatorWithPathToXSD:(id)arg1;
+ (id)validatorWithXSD:(id)arg1;

- (id)_initWithSchema:(struct _xmlSchema { char *x1; char *x2; char *x3; char *x4; struct _xmlDoc {} *x5; struct _xmlSchemaAnnot {} *x6; int x7; struct _xmlHashTable {} *x8; struct _xmlHashTable {} *x9; struct _xmlHashTable {} *x10; struct _xmlHashTable {} *x11; struct _xmlHashTable {} *x12; struct _xmlHashTable {} *x13; void *x14; struct _xmlHashTable {} *x15; struct _xmlDict {} *x16; void *x17; int x18; int x19; struct _xmlHashTable {} *x20; void *x21; }*)arg1;
- (void)dealloc;
- (bool)validateXML:(id)arg1 simpleError:(id*)arg2 detailedErrors:(id*)arg3;

@end
