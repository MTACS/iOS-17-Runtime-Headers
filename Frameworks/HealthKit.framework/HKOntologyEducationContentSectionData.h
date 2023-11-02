
@interface HKOntologyEducationContentSectionData : NSObject <NSCopying, NSSecureCoding> {
    bool  _deleted;
    long long  _sectionDataType;
    NSArray * _stringValues;
    double  _timestamp;
    long long  _version;
}

@property (nonatomic, readonly) bool deleted;
@property (nonatomic, readonly) long long sectionDataType;
@property (nonatomic, readonly, copy) NSArray *stringValues;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) long long version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)deleted;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStringValues:(id)arg1 sectionDataType:(long long)arg2 version:(long long)arg3 timestamp:(double)arg4 deleted:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (long long)sectionDataType;
- (id)stringValues;
- (double)timestamp;
- (long long)version;

@end
