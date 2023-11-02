
@interface HKUserDomainConceptLink : NSObject <HDCoding, NSCopying, NSSecureCoding> {
    HKUserDomainConceptLinkStructWrapper * _implementation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSUUID *targetUUID;
@property (nonatomic, readonly) long long type;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithLinkStructWrapper:(id)arg1;
- (id)initWithTarget:(id)arg1 type:(long long)arg2;
- (id)initWithUserConcept:(id)arg1 type:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)targetUUID;
- (long long)type;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
