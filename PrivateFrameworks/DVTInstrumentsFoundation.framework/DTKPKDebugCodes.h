
@interface DTKPKDebugCodes : NSObject {
    NSSet * _allKDebugCodes;
    XRIntKeyedDictionary * _codeMap;
}

@property (nonatomic, readonly, retain) NSSet *allKDebugCodes;

+ (id)codesFromURL:(id)arg1 error:(id*)arg2;
+ (void)initialize;
+ (id)localKDebugCodes:(id*)arg1;

- (void).cxx_destruct;
- (id)allKDebugCodes;
- (id)initWithCodeMapping:(id)arg1;
- (id)initWithCodes:(id)arg1;
- (id)kdebugCodeByValue:(unsigned int)arg1;
- (id)kdebugCodeWithNameForCode:(union { unsigned int x1; struct { unsigned int x_2_1_1 : 2; unsigned int x_2_1_2 : 14; unsigned int x_2_1_3 : 8; unsigned int x_2_1_4 : 8; } x2; })arg1;
- (id)kdebugCodeWithNameForValue:(unsigned int)arg1;

@end
