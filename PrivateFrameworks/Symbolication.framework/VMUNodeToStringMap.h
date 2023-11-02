
@interface VMUNodeToStringMap : NSObject <NSSecureCoding> {
    void * _nodeToStringIndexMapVoidPtr;
    void * _stringToIndexMapVoidPtr;
    NSMutableArray * _strings;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned int)_indexForString:(id)arg1;
- (unsigned int)count;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateHexAddressesInStrings:(id /* block */)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)resymbolicate__NSMallocBlock__StringsWithGraph:(id)arg1;
- (void)setString:(id)arg1 forNode:(unsigned int)arg2;
- (id)stringForNode:(unsigned int)arg1;
- (unsigned int)uniquedStringCount;

@end
