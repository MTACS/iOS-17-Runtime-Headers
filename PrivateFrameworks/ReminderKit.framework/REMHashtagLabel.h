
@interface REMHashtagLabel : NSObject <NSCopying, NSSecureCoding> {
    NSString * _canonicalName;
    NSDate * _firstOccurrenceCreationDate;
    NSString * _name;
    NSDate * _recencyDate;
    NSUUID * _uuidForChangeTracking;
}

@property (nonatomic, readonly) NSString *canonicalName;
@property (nonatomic, readonly) NSDate *firstOccurrenceCreationDate;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *recencyDate;
@property (nonatomic, readonly) NSUUID *uuidForChangeTracking;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)canonicalName;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)firstOccurrenceCreationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 canonicalName:(id)arg2 firstOccurrenceCreationDate:(id)arg3 recencyDate:(id)arg4 uuidForChangeTracking:(id)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToHashtagLabel:(id)arg1;
- (id)name;
- (id)recencyDate;
- (id)uuidForChangeTracking;

@end
