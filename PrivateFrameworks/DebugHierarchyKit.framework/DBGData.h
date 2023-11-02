
@interface DBGData : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSData * _data;
}

@property (retain) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withData:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)data;
- (id)debugDescription;
- (id)description;
- (id)initWithData:(id)arg1;
- (id)objectValue;
- (void)setData:(id)arg1;

@end
