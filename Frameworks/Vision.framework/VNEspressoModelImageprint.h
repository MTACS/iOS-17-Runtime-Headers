
@interface VNEspressoModelImageprint : NSObject <NSCopying, NSSecureCoding, VNOriginatingRequestSpecifierProviding, VNRequestRevisionProviding, VNSerializing, VNSerializingInternal> {
    unsigned long long  _confidenceScoreType;
    NSData * _descriptorData;
    unsigned long long  _elementCount;
    unsigned long long  _elementType;
    VNRequestSpecifier * _originatingRequestSpecifier;
    unsigned long long  _serializationOptions;
    NSString * _version;
}

@property (nonatomic, readonly) unsigned long long confidenceScoreType;
@property (readonly) NSData *descriptorData;
@property (readonly) unsigned long long elementCount;
@property (readonly) unsigned long long elementType;
@property (readonly) unsigned long long lengthInBytes;
@property (readonly) VNRequestSpecifier *originatingRequestSpecifier;
@property (nonatomic, readonly) unsigned long long requestRevision;
@property (nonatomic, readonly) unsigned long long serializedLength;
@property (readonly) NSString *version;

+ (unsigned long long)confidenceTypeForOriginatingRequestSpecifier:(id)arg1;
+ (id)defaultOriginatingRequestClassNameForRequestRevision:(unsigned long long)arg1;
+ (id)originatingRequestSpecifierForRequestRevision:(unsigned long long)arg1 error:(id*)arg2;
+ (id)printFromCSUBuffer:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
+ (id)printFromEspressoBuffer:(struct { void *x1; void *x2; unsigned long long x3[4]; unsigned long long x4[4]; unsigned long long x5; unsigned long long x6; unsigned long long x7; unsigned long long x8; unsigned long long x9; unsigned long long x10; unsigned long long x11; unsigned long long x12; unsigned long long x13; unsigned long long x14; int x15; })arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
+ (id)printWithDescriptorData:(id)arg1 elementType:(unsigned long long)arg2 elementCount:(unsigned long long)arg3 originatingRequestSpecifier:(id)arg4 error:(id*)arg5;
+ (id)printWithFloat16PrecisionFloat32Data:(id)arg1 originatingRequestSpecifier:(id)arg2 error:(id*)arg3;
+ (id)printWithFloat16PrecisionFloat32Values:(const float*)arg1 elementCount:(unsigned long long)arg2 originatingRequestSpecifier:(id)arg3 error:(id*)arg4;
+ (bool)shouldAssumeOriginatingRequestClassForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)shouldIgnoreLagecyLabelsAndConfidenceForHeaderSerializationVersion:(unsigned int)arg1;
+ (bool)supportsSecureCoding;
+ (bool)validateDescriptorData:(id)arg1 elementType:(unsigned long long)arg2 elementCount:(unsigned long long)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (id)VNEspressoModelImageprintMLMultiArrayWithConstraint:(id)arg1 error:(id*)arg2;
- (id)VNEspressoModelImageprintOneDimensionMLMultiArrayWithDataType:(long long)arg1 error:(id*)arg2;
- (id)_VNEspressoModelImageprintMLMultiArrayWithDataType:(long long)arg1 shape:(id)arg2 strides:(id)arg3 error:(id*)arg4;
- (unsigned long long)_VNEspressoModelImageprintSerializedLength;
- (id)_initWithClassKeyMappedCoder:(id)arg1;
- (id)computeDistance:(id)arg1 withDistanceFunction:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)confidenceScoreType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptorData;
- (unsigned long long)elementCount;
- (unsigned long long)elementType;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasEquivalentDescriptorToImageprint:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1 forCodingVersion:(unsigned int)arg2;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 labelsAndConfidence:(id)arg5 requestRevision:(unsigned long long)arg6;
- (id)initWithData:(const void*)arg1 elementCount:(unsigned long long)arg2 elementType:(unsigned long long)arg3 lengthInBytes:(unsigned long long)arg4 requestRevision:(unsigned long long)arg5;
- (id)initWithDescriptorData:(id)arg1 elementType:(unsigned long long)arg2 elementCount:(unsigned long long)arg3 originatingRequestSpecifier:(id)arg4;
- (id)initWithState:(id)arg1 byteOffset:(unsigned long long*)arg2 error:(id*)arg3;
- (id)initWithState:(id)arg1 error:(id*)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isPrint:(id)arg1 compatibleWithOtherPrint:(id)arg2 error:(id*)arg3;
- (id)labelsAndConfidence;
- (unsigned long long)lengthInBytes;
- (id)originatingRequestSpecifier;
- (unsigned long long)requestRevision;
- (id)serializeStateAndReturnError:(id*)arg1;
- (unsigned long long)serializeStateIntoData:(id)arg1 startingAtByteOffset:(unsigned long long)arg2 error:(id*)arg3;
- (unsigned long long)serializedLength;
- (id)version;

@end
