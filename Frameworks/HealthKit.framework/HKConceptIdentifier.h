
@interface HKConceptIdentifier : NSObject <NSCopying, NSObject, NSSecureCoding> {
    long long  _rawIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isAdHoc;
@property (nonatomic, readonly) bool isInMemory;
@property (nonatomic, readonly, copy) NSNumber *numberRepresentation;
@property (nonatomic, readonly) long long rawIdentifier;
@property (readonly) Class superclass;

+ (id)diastolicBloodPressure;
+ (id)identifierWithNumber:(id)arg1;
+ (id)identifierWithRawIdentifier:(long long)arg1;
+ (id)inMemoryConceptIdentifier;
+ (id)medication;
+ (id)root;
+ (bool)supportsSecureCoding;
+ (id)systolicBloodPressure;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithRawIdentifier:(long long)arg1;
- (bool)isAdHoc;
- (bool)isEqual:(id)arg1;
- (bool)isInMemory;
- (id)numberRepresentation;
- (long long)rawIdentifier;

@end
