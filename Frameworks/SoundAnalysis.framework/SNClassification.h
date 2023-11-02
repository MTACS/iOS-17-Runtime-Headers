
@interface SNClassification : NSObject <NSCopying, NSSecureCoding, SNConfidenceProvidingWritable> {
    double  _confidence;
    NSString * _identifier;
}

@property (readonly) double confidence;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSString *identifier;
@property (readonly) Class superclass;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 confidence:(double)arg2;
- (bool)isEqual:(id)arg1;

@end
