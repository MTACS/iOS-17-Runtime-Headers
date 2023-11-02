
@interface SPKeySyncRecord : NSObject <NSCopying, NSSecureCoding> {
    NSUUID * _identifier;
    NSDate * _lastIndexObservationDate;
    unsigned long long  _lastIndexObserved;
}

@property (nonatomic, copy) NSUUID *identifier;
@property (nonatomic, copy) NSDate *lastIndexObservationDate;
@property (nonatomic) unsigned long long lastIndexObserved;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastIndexObservationDate;
- (unsigned long long)lastIndexObserved;
- (void)setIdentifier:(id)arg1;
- (void)setLastIndexObservationDate:(id)arg1;
- (void)setLastIndexObserved:(unsigned long long)arg1;

@end
