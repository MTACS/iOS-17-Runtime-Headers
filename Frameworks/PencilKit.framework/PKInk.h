
@interface PKInk : NSObject <NSCopying, NSSecureCoding> {
    PKInkBehavior * _behavior;
    UIColor * _color;
    NSString * _identifier;
    void _sixChannelAddColor;
    void _sixChannelMultiplyColor;
    struct shared_ptr<PKProtobufUnknownFields> { 
        struct PKProtobufUnknownFields {} *__ptr_; 
        struct __shared_weak_count {} *__cntrl_; 
    }  _unknownFields;
    NSString * _variant;
    unsigned long long  _version;
    double  _weight;
}

@property (nonatomic, readonly) bool _isStrokeGeneratingInk;
@property (nonatomic) void _sixChannelAddColor;
@property (nonatomic) void _sixChannelMultiplyColor;
@property (nonatomic, readonly) double _weight;
@property (nonatomic, retain) PKInkBehavior *behavior;
@property (nonatomic, readonly) UIColor *color;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) long long inkFormatVersion;
@property (nonatomic, readonly) NSString *inkType;
@property (nonatomic, readonly) NSData *rawValue;
@property (nonatomic, readonly) long long requiredContentVersion;
@property (nonatomic, readonly) NSString *variant;
@property (nonatomic, readonly) unsigned long long version;
@property (nonatomic, readonly) double weight;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (void)_clearCachedInks;
+ (id)colorForLassoStroke;
+ (long long)currentInkVersionForInkIdentifier:(id)arg1;
+ (double)defaultOpacityForIdentifier:(id)arg1;
+ (double)defaultWeightForIdentifier:(id)arg1;
+ (id)identifierForCommandType:(unsigned int)arg1 wantsObjectErase:(bool)arg2;
+ (id)identifierForInkType:(id)arg1;
+ (id)inkFromDictionary:(id)arg1 color:(id)arg2 identifier:(id)arg3;
+ (id)inkFromInk:(id)arg1 color:(id)arg2;
+ (id)inkFromInk:(id)arg1 weight:(double)arg2;
+ (id)inkFromInk:(id)arg1 withBehavior:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 variant:(id)arg3;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
+ (id)inkWithIdentifier:(id)arg1 color:(id)arg2 weight:(double)arg3;
+ (id)inkWithIdentifier:(id)arg1 properties:(id)arg2;
+ (id)inkWithIdentifier:(id)arg1 properties:(id)arg2 inkVersion:(long long)arg3;
+ (id)inkWithType:(id)arg1 color:(id)arg2 weight:(double)arg3;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_addTestDataToUnknownFields;
- (id)_copyWithVariant:(id)arg1;
- (id)_dataInUnknownFields;
- (void)_defaultSixChannelAddColor;
- (void)_defaultSixChannelMultiplyColor;
- (bool)_isCrayonInk;
- (bool)_isEraserInk;
- (bool)_isFountainPenInk;
- (bool)_isHandwritingInk;
- (bool)_isLassoInk;
- (bool)_isMarkerInk;
- (bool)_isMonolineInk;
- (bool)_isPencilInk;
- (bool)_isStrokeGeneratingInk;
- (bool)_isWatercolorInk;
- (long long)_numPaintFramebuffers;
- (void)_setupCustomizedSixChannelColors;
- (void)_setupDefaultSixChannelAddAndMultiplyColors;
- (bool)_shouldSaveSixChannelAddColor;
- (bool)_shouldSaveSixChannelMultiplyColor;
- (void)_sixChannelAddColor;
- (void)_sixChannelMultiplyColor;
- (id)_sixChannelVersion;
- (bool)_supportsCombiningStrokes;
- (double)_weight;
- (id)behavior;
- (id)color;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (unsigned long long)hashValueForFloat:(double)arg1;
- (id)identifier;
- (id)identifierForArchiving;
- (id)init;
- (id)initWithArchive:(const void*)arg1;
- (id)initWithBehavior:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5;
- (id)initWithIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5 behavior:(id)arg6;
- (id)initWithInkType:(id)arg1 color:(id)arg2;
- (id)initWithRawValue:(id)arg1;
- (id)initWithUncheckedIdentifier:(id)arg1 color:(id)arg2 version:(unsigned long long)arg3 variant:(id)arg4 weight:(double)arg5;
- (id)initWithV1Archive:(const void*)arg1 serializationVersion:(unsigned long long)arg2;
- (long long)inkFormatVersion;
- (id)inkType;
- (bool)isEqual:(id)arg1;
- (bool)isEqualInk:(id)arg1;
- (bool)isEqualUnweightedInk:(id)arg1;
- (id)properties;
- (id)rawValue;
- (long long)requiredContentVersion;
- (void)saveToArchive:(void*)arg1;
- (void)saveToV1Archive:(void*)arg1;
- (void)setBehavior:(id)arg1;
- (void)setWeight:(double)arg1;
- (void)set_sixChannelAddColor;
- (void)set_sixChannelMultiplyColor;
- (id)variant;
- (id)variantForArchiving;
- (unsigned long long)version;
- (double)weight;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

+ (id)akDefaultInkWithHighVisibility:(bool)arg1;
+ (id)akDefaultInkWithIdentifier:(id)arg1 color:(id)arg2 strokeWidth:(double)arg3;
+ (id)akInkFromInk:(id)arg1 color:(id)arg2 strokeWidth:(double)arg3;
+ (id)akInkFromInk:(id)arg1 strokeWidth:(double)arg2;
+ (double)inkWeightFromAKValue:(double)arg1;

@end
