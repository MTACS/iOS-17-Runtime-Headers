
@interface HVInteraction : NSObject <BMIdentifiableContentEvent, NSCopying> {
    NSString * _bundleIdentifier;
    INInteraction * _interaction;
}

@property (nonatomic, readonly) double absoluteTimestamp;
@property (nonatomic, readonly) NSString *bundleId;
@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, readonly) NSString *domainId;
@property (nonatomic, readonly) INInteraction *interaction;
@property (nonatomic, readonly) NSString *uniqueId;

+ (id)domainIdForInteractionGroupId:(id)arg1;
+ (id)uniqueIdForInteractionIdentifier:(id)arg1;

- (void).cxx_destruct;
- (double)absoluteTimestamp;
- (id)bundleId;
- (id)bundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)domainId;
- (unsigned long long)hash;
- (id)init;
- (id)initWithInteraction:(id)arg1 bundleIdentifier:(id)arg2;
- (id)interaction;
- (bool)isEqual:(id)arg1;
- (id)uniqueId;

@end
