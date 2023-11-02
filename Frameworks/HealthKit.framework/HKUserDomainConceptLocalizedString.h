
@interface HKUserDomainConceptLocalizedString : HKUserDomainConceptProperty <HDCoding> {
    NSString * _locale;
    NSString * _stringValue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *locale;
@property (nonatomic, readonly, copy) NSString *stringValue;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)_propertiesByLocale:(id)arg1;
+ (id)mergeListsOfPropertiesWithType:(long long)arg1 intoListOfProperties:(id)arg2 fromListOfProperties:(id)arg3 options:(unsigned long long)arg4;
+ (id)nullPropertyWithType:(long long)arg1 locale:(id)arg2 version:(long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 locale:(id)arg3 version:(long long)arg4;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 locale:(id)arg3 version:(long long)arg4 timestamp:(double)arg5;
- (id)initWithType:(long long)arg1 stringValue:(id)arg2 locale:(id)arg3 version:(long long)arg4 timestamp:(double)arg5 deleted:(bool)arg6;
- (id)initWithType:(long long)arg1 version:(long long)arg2 timestamp:(double)arg3 deleted:(bool)arg4;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (id)stringValue;
- (id)valueDescription;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
