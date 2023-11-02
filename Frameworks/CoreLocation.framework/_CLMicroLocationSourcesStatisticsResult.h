
@interface _CLMicroLocationSourcesStatisticsResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _sourcesData;
}

@property (nonatomic, readonly, copy) NSArray *sourcesData;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSourcesData:(id)arg1;
- (id)sourcesData;

@end
