
@interface HKUserDomainConceptSemanticIdentifier : NSObject <NSCopying> {
    HKUserDomainConceptTypeIdentifier * _typeIdentifier;
}

@property (nonatomic, readonly, copy) NSString *stringValue;
@property (nonatomic, readonly, copy) HKUserDomainConceptTypeIdentifier *typeIdentifier;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)semanticIdentifierWithComponents:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithTypeIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)stringValue;
- (id)typeIdentifier;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)_semanticIdentifierFromSemanticIdentifierString:(id)arg1 userDomainConceptEntityRegistry:(id)arg2;
+ (id)semanticIdentifierFromSemanticIdentifierString:(id)arg1 profile:(id)arg2;

@end
