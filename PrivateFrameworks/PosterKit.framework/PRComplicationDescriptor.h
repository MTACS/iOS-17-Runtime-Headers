
@interface PRComplicationDescriptor : NSObject <NSCopying, NSSecureCoding, PBFComplicationLookupInfo> {
    ATXComplication * _suggestedComplication;
    NSString * _uniqueIdentifier;
    CHSWidget * _widget;
}

@property (nonatomic, readonly, copy) NSString *complicationContainingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *complicationExtensionBundleIdentifier;
@property (nonatomic, readonly, copy) INIntent *complicationIntent;
@property (nonatomic, readonly, copy) NSNumber *complicationWidgetFamily;
@property (nonatomic, readonly, copy) NSString *complicationWidgetKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasMatchingDescriptor;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) ATXComplication *suggestedComplication;
@property (nonatomic, readonly, copy) ATXComplication *suggestedComplication;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSString *uniqueIdentifier;
@property (nonatomic, retain) CHSWidget *widget;

// Image: /System/Library/PrivateFrameworks/PosterKit.framework/PosterKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)PRSWidget;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasMatchingDescriptor;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithPRSWidget:(id)arg1;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2;
- (id)initWithUniqueIdentifier:(id)arg1 widget:(id)arg2 suggestedComplication:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)layoutElement;
- (void)setSuggestedComplication:(id)arg1;
- (void)setWidget:(id)arg1;
- (id)suggestedComplication;
- (id)uniqueIdentifier;
- (id)widget;
- (id)widgetDescriptor;

// Image: /System/Library/PrivateFrameworks/PosterBoard.framework/PosterBoard

- (id)complicationContainingBundleIdentifier;
- (id)complicationExtensionBundleIdentifier;
- (id)complicationIntent;
- (id)complicationWidgetFamily;
- (id)complicationWidgetKind;

@end
