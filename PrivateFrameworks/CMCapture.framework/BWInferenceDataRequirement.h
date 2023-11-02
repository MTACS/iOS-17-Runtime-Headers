
@interface BWInferenceDataRequirement : NSObject <NSCopying> {
    long long  _identifier;
}

@property (nonatomic, readonly) long long identifier;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (long long)identifier;
- (id)init;
- (id)initWithDataRequirement:(id)arg1;
- (bool)isEqual:(id)arg1;

@end
