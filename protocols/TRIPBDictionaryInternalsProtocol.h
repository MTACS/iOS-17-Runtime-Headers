
@protocol TRIPBDictionaryInternalsProtocol

@required

- (unsigned long long)computeSerializedSizeAsField:(TRIPBFieldDescriptor *)arg1;
- (void)enumerateForTextFormat:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, id, void*
- (void)setTRIPBGenericValue:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg1 forTRIPBGenericValueKey:(union { bool x1; int x2; long long x3; unsigned int x4; unsigned long long x5; float x6; double x7; id x8; id x9; id x10; int x11; }*)arg2;
- (void)writeToCodedOutputStream:(TRIPBCodedOutputStream *)arg1 asField:(TRIPBFieldDescriptor *)arg2;

@end
