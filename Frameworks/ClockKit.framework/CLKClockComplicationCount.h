
@interface CLKClockComplicationCount : NSObject <NSCopying, NSSecureCoding> {
    NSString * _applicationIdentifier;
    long long  _countOnFace;
    bool  _widget;
}

@property (nonatomic, readonly) NSString *applicationIdentifier;
@property (nonatomic, readonly) long long countOnFace;
@property (getter=isWidget, nonatomic, readonly) bool widget;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)countOnFace;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithApplicationIdentifier:(id)arg1 countOnFace:(long long)arg2 isWidget:(bool)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isWidget;
- (id)mergedWith:(id)arg1;

@end
