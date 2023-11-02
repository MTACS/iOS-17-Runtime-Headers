
@interface DBGAttributedString : NSObject <DBGValue, DBGValueJSONSerialization> {
    NSAttributedString * _attributedString;
}

@property (retain) NSAttributedString *attributedString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)valueWithEncodedValue:(id)arg1 format:(id)arg2 error:(id*)arg3;
+ (id)withAttributedString:(id)arg1;

- (void).cxx_destruct;
- (id)JSONCompatibleRepresentation;
- (id)attributedString;
- (id)debugDescription;
- (id)description;
- (id)initWithAttributedString:(id)arg1;
- (id)objectValue;
- (void)setAttributedString:(id)arg1;

@end
