
@interface ATXComplication : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    INIntent * _intent;
    NSString * _kind;
    NSString * _predictionSource;
    double  _score;
    int  _source;
    long long  _widgetFamily;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, copy) NSString *predictionSource;
@property (nonatomic) double score;
@property (nonatomic) int source;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) CHSWidgetDescriptor *widgetDescriptor;
@property (nonatomic, readonly) long long widgetFamily;

// Image: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient

+ (id)complicationFromDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (id)stringForComplicationSource:(int)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 intent:(id)arg5;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 intent:(id)arg5 source:(int)arg6;
- (id)initWithWidgetDescriptor:(id)arg1 widgetFamily:(long long)arg2 intent:(id)arg3;
- (id)initWithWidgetDescriptor:(id)arg1 widgetFamily:(long long)arg2 intent:(id)arg3 source:(int)arg4;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXComplication:(id)arg1;
- (id)kind;
- (bool)matchesPersonality:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)predictionSource;
- (double)score;
- (void)setPredictionSource:(id)arg1;
- (void)setScore:(double)arg1;
- (void)setSource:(int)arg1;
- (int)source;
- (id)widgetDescriptor;
- (long long)widgetFamily;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)initWithPosterBoardRepresentation:(id)arg1;
- (id)posterBoardRepresentation;

@end
