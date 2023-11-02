
@interface PXEnumerator : NSObject <PXFastEnumeration> {
    id  _enumeratedObject;
    unsigned long long  recursiveEnumerationValue;
}

@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) id enumeratedObject;
@property (nonatomic, readonly) id firstObject;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)enumeratedObject;
- (id)firstObject;
- (id)nextObject;
- (void)reset;
- (void)setEnumeratedObject:(id)arg1;

@end
