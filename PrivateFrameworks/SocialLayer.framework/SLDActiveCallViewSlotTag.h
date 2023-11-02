
@interface SLDActiveCallViewSlotTag : SLDSlotTag <NSCopying, NSSecureCoding> {
    NSString * _activeCallDisplayName;
    NSData * _activeCallGroupPhotoData;
    NSNumber * _callActiveNumber;
    double  _maxWidth;
    NSNumber * _maxWidthNumber;
}

@property (nonatomic, retain) NSString *activeCallDisplayName;
@property (nonatomic, retain) NSData *activeCallGroupPhotoData;
@property (getter=isCallActive, nonatomic, readonly) bool callActive;
@property (nonatomic, retain) NSNumber *callActiveNumber;
@property (nonatomic) double maxWidth;
@property (nonatomic, retain) NSNumber *maxWidthNumber;

+ (bool)supportsSecureCoding;
+ (id)tagForMaxWidth:(double)arg1 callActive:(bool)arg2 activeCallGroupPhotoData:(id)arg3 activeCallDisplayName:(id)arg4;

- (void).cxx_destruct;
- (id)activeCallDisplayName;
- (id)activeCallGroupPhotoData;
- (id)callActiveNumber;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMaxWidth:(double)arg1 callActive:(bool)arg2 activeCallGroupPhotoData:(id)arg3 activeCallDisplayName:(id)arg4;
- (bool)isCallActive;
- (bool)isEqual:(id)arg1;
- (double)maxWidth;
- (id)maxWidthNumber;
- (id)resolvedStyleForStyle:(id)arg1;
- (void)setActiveCallDisplayName:(id)arg1;
- (void)setActiveCallGroupPhotoData:(id)arg1;
- (void)setCallActiveNumber:(id)arg1;
- (void)setMaxWidth:(double)arg1;
- (void)setMaxWidthNumber:(id)arg1;

@end
