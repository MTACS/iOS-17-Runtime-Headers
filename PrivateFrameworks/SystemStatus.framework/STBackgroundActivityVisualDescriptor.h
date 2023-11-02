
@interface STBackgroundActivityVisualDescriptor : NSObject <BSDebugDescriptionProviding, NSCopying, NSMutableCopying, NSSecureCoding> {
    STBackgroundActivityVisualDescriptorColorRepresentation * _backgroundColorRepresentation;
    NSSet * _crossfadableActivities;
    double  _fontSizeAdjustment;
    NSString * _imageName;
    NSString * _packageName;
    NSString * _preferredContinuousAnimationName;
    NSString * _preferredVisualEffectName;
    bool  _prefersToKeepContentVisible;
    NSString * _systemImageName;
    NSString * _textLabel;
    double  _verticalOffsetInPixels;
}

@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, readonly) STBackgroundActivityVisualDescriptorColorRepresentation *backgroundColorRepresentation;
@property (nonatomic, readonly, copy) NSSet *crossfadableActivities;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double fontSizeAdjustment;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *imageName;
@property (nonatomic, readonly, copy) NSString *packageName;
@property (nonatomic, readonly, copy) NSString *preferredContinuousAnimationName;
@property (nonatomic, readonly) UIVisualEffect *preferredVisualEffect;
@property (nonatomic, readonly, copy) NSString *preferredVisualEffectName;
@property (nonatomic, readonly) bool prefersToKeepContentVisible;
@property (nonatomic, readonly) bool prefersToPulse;
@property (nonatomic, readonly) bool prefersToRing;
@property (nonatomic, readonly) bool prefersToSuppressPulse;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *systemImageName;
@property (nonatomic, readonly, copy) NSString *textLabel;
@property (nonatomic, readonly) double verticalOffset;
@property (nonatomic, readonly) double verticalOffsetInPixels;

// Image: /System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus

+ (id)_defaultVisualDescriptors;
+ (bool)supportsSecureCoding;
+ (id)visualDescriptorForBackgroundActivityWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (id)_descriptionBuilderWithMultilinePrefix:(id)arg1 forDebug:(bool)arg2;
- (id)backgroundColorRepresentation;
- (bool)canCrossfadeToBackgroundActivityWithIdentifier:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)crossfadableActivities;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)fontSizeAdjustment;
- (unsigned long long)hash;
- (id)imageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithPlistRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)packageName;
- (id)preferredContinuousAnimationName;
- (id)preferredVisualEffectName;
- (bool)prefersToKeepContentVisible;
- (bool)prefersToPulse;
- (bool)prefersToRing;
- (bool)prefersToSuppressPulse;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)systemImageName;
- (id)textLabel;
- (double)verticalOffsetInPixels;

// Image: /System/Library/PrivateFrameworks/SystemStatusUI.framework/SystemStatusUI

- (id)backgroundColor;
- (id)preferredVisualEffect;
- (double)verticalOffset;

@end
