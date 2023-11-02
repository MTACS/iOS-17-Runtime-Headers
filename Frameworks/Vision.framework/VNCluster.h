
@interface VNCluster : NSObject <NSCopying, NSSecureCoding> {
    unsigned long long  _clusterId;
    NSArray * _objects;
    NSDictionary * _representativenessById;
    bool  _shouldUpdateRepresentative;
    NSArray * _suggestedIdsForRepresentative;
    unsigned long long  _totalObjectCount;
}

@property (nonatomic) unsigned long long clusterId;
@property (nonatomic, retain) NSArray *objects;
@property (nonatomic, retain) NSDictionary *representativenessById;
@property (nonatomic) bool shouldUpdateRepresentative;
@property (nonatomic, retain) NSArray *suggestedIdsForRepresentative;
@property (nonatomic) unsigned long long totalObjectCount;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (unsigned long long)clusterId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)objects;
- (id)representativenessById;
- (void)setClusterId:(unsigned long long)arg1;
- (void)setObjects:(id)arg1;
- (void)setRepresentativenessById:(id)arg1;
- (void)setShouldUpdateRepresentative:(bool)arg1;
- (void)setSuggestedIdsForRepresentative:(id)arg1;
- (void)setTotalObjectCount:(unsigned long long)arg1;
- (bool)shouldUpdateRepresentative;
- (id)suggestedIdsForRepresentative;
- (unsigned long long)totalObjectCount;

@end
