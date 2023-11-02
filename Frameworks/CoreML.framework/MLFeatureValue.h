
@interface MLFeatureValue : NSObject <NSCopying, NSSecureCoding> {
    NSObject * _objectValue;
    long long  _type;
    bool  _undefined;
    id  _value;
}

@property (nonatomic, readonly) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) double doubleValue;
@property (nonatomic, readonly) struct __CVBuffer { }*imageBufferValue;
@property (nonatomic, readonly) long long int64Value;
@property (nonatomic, readonly) MLMultiArray *multiArrayValue;
@property (nonatomic, retain) NSObject *objectValue;
@property (nonatomic, readonly) MLSequence *sequenceValue;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly) long long type;
@property (getter=isUndefined, nonatomic, readonly) bool undefined;
@property (retain) id value;

// Image: /System/Library/Frameworks/CoreML.framework/CoreML

+ (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })cropRectFromOptions:(id)arg1;
+ (id)featureValueOfType:(long long)arg1 fromObject:(id)arg2 error:(id*)arg3;
+ (id)featureValueWithCGImage:(struct CGImage { }*)arg1 constraint:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)featureValueWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 constraint:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)featureValueWithCGImage:(struct CGImage { }*)arg1 orientation:(unsigned int)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned int)arg5 options:(id)arg6 error:(id*)arg7;
+ (id)featureValueWithCGImage:(struct CGImage { }*)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(id*)arg6;
+ (id)featureValueWithDictionary:(id)arg1 error:(id*)arg2;
+ (id)featureValueWithDouble:(double)arg1;
+ (id)featureValueWithImageAtURL:(id)arg1 constraint:(id)arg2 options:(id)arg3 error:(id*)arg4;
+ (id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned int)arg2 constraint:(id)arg3 options:(id)arg4 error:(id*)arg5;
+ (id)featureValueWithImageAtURL:(id)arg1 orientation:(unsigned int)arg2 pixelsWide:(long long)arg3 pixelsHigh:(long long)arg4 pixelFormatType:(unsigned int)arg5 options:(id)arg6 error:(id*)arg7;
+ (id)featureValueWithImageAtURL:(id)arg1 pixelsWide:(long long)arg2 pixelsHigh:(long long)arg3 pixelFormatType:(unsigned int)arg4 options:(id)arg5 error:(id*)arg6;
+ (id)featureValueWithInt64:(long long)arg1;
+ (id)featureValueWithInt64KeyDictionary:(id)arg1;
+ (id)featureValueWithMultiArray:(id)arg1;
+ (id)featureValueWithPixelBuffer:(struct __CVBuffer { }*)arg1;
+ (id)featureValueWithSequence:(id)arg1;
+ (id)featureValueWithString:(id)arg1;
+ (id)featureValueWithStringKeyDictionary:(id)arg1;
+ (bool)supportsSecureCoding;
+ (id)undefinedFeatureValueWithType:(long long)arg1;
+ (unsigned long long)visionCropAndScaleOptionFromOptions:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)debugQuickLookObject;
- (id)description;
- (id)dictionaryValue;
- (double)doubleValue;
- (void)encodeWithCoder:(id)arg1;
- (id)getFeatureSize:(id*)arg1;
- (id)getFeatureSize:(id*)arg1 ndArrayMode:(bool)arg2;
- (unsigned long long)hash;
- (struct __CVBuffer { }*)imageBufferValue;
- (id)initWithCoder:(id)arg1;
- (id)initWithUndefinedValueAndType:(long long)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (long long)int64Value;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToFeatureValue:(id)arg1;
- (bool)isUndefined;
- (id)multiArrayValue;
- (id)objectValue;
- (id)sequenceValue;
- (void)setObjectValue:(id)arg1;
- (void)setValue:(id)arg1;
- (id)stringValue;
- (long long)type;
- (id)value;

// Image: /System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

+ (id)featureValueOfTypeDouble:(id)arg1;

@end
