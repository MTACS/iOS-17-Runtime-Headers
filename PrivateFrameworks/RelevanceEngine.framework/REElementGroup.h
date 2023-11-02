
@interface REElementGroup : NSObject <NSCopying, REAutomaticExportedInterface> {
    unsigned long long  _behavior;
    NSString * _groupIdentifier;
    long long  _maxElementCount;
}

@property (nonatomic) unsigned long long behavior;
@property (nonatomic, readonly) NSString *groupIdentifier;
@property (nonatomic) long long maxElementCount;

+ (id)adjoiningElementGroupWithIdentifier:(id)arg1;
+ (id)topElementGroupWithIdentifier:(id)arg1;

- (void).cxx_destruct;
- (unsigned long long)behavior;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)groupIdentifier;
- (unsigned long long)hash;
- (id)initWithGroupIdentifier:(id)arg1;
- (bool)isEqual:(id)arg1;
- (long long)maxElementCount;
- (void)setBehavior:(unsigned long long)arg1;
- (void)setMaxElementCount:(long long)arg1;

@end
