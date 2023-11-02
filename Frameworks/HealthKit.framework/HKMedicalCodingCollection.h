
@interface HKMedicalCodingCollection : NSObject <HDCoding, NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSOrderedSet * _codingsOrderedSet;
}

@property (nonatomic, readonly, copy) NSArray *codings;
@property (nonatomic, readonly, copy) NSDictionary *codingsBySystem;
@property (nonatomic, readonly, copy) NSSet *codingsSet;
@property (nonatomic, readonly) long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/Frameworks/HealthKit.framework/HealthKit

+ (id)collectionWithCoding:(id)arg1;
+ (id)collectionWithCodings:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)codings;
- (id)codingsBySystem;
- (id)codingsForCodingSystem:(id)arg1;
- (id)codingsSet;
- (id)collectionByAddingCodings:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithCodings:(id)arg1;
- (bool)isEqual:(id)arg1;

// Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon

+ (id)createWithCodable:(id)arg1;

- (id)codableRepresentationForSync;

@end
