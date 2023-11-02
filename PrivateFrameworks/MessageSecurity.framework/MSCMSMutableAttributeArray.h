
@interface MSCMSMutableAttributeArray : NSMutableArray {
    NSMutableArray * _attributes;
    NSData * _encodedAttributeSet;
    NSMutableArray * _genericAttributes;
}

@property (retain) NSMutableArray *attributes;
@property (retain) NSData *encodedAttributeSet;
@property (retain) NSMutableArray *genericAttributes;

+ (id)createAttributeArrayFromAttributeSetRaw:(struct heim_base_data { unsigned long long x1; void *x2; }*)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)attributes;
- (id)calculateAttributesWithDigest:(id)arg1 error:(id*)arg2;
- (unsigned long long)count;
- (id)encodeAttributesWithError:(id*)arg1;
- (id)encodeImplicitAttributesWithError:(id*)arg1;
- (id)encodedAttributeSet;
- (id)genericAttributes;
- (id)getAttributesWithType:(id)arg1;
- (id)initWithCapacity:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (void)removeAttributes:(id)arg1;
- (void)removeLastObject;
- (void)removeObjectAtIndex:(unsigned long long)arg1;
- (void)replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)reset;
- (void)setAttributes:(id)arg1;
- (void)setEncodedAttributeSet:(id)arg1;
- (void)setGenericAttributes:(id)arg1;

@end
