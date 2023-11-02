
@interface MontrealNNModelTensor : MontrealNNDescription <MontrealNNDescriptionProtocol, NSCopying> {
    NSHashTable * _asInput;
    NSHashTable * _asOutput;
    NSArray * _dimension;
    NSString * _name;
}

@property (readonly) NSHashTable *asInput;
@property (readonly) NSHashTable *asOutput;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSArray *dimension;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *name;
@property (readonly) Class superclass;

+ (id)createInputs:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg1 inputChunks:(id)arg2 nodeName:(id)arg3;
+ (id)createOutputs:(struct { long long x1; long long x2; long long x3; long long x4; long long x5; long long x6; long long x7; long long x8[8]; unsigned long long x9; int x10[8][4]; int x11[4][4]; int x12[16]; float x13[16]; void *x14[16]; void *x15[16]; }*)arg1 outputChunks:(id)arg2 nodeName:(id)arg3;

- (void).cxx_destruct;
- (id)asInput;
- (id)asOutput;
- (id)checkForValidity;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)description:(id)arg1 indent:(id)arg2;
- (id)dimension;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithName:(id)arg1 dimension:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)jsonDescription;
- (id)name;
- (unsigned long long)tensorSize;

@end
