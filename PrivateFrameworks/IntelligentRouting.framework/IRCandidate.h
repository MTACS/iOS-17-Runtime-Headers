
@interface IRCandidate : NSObject <NSCopying, NSSecureCoding> {
    NSString * _avOutpuDeviceIdentifier;
    NSString * _candidateIdentifier;
    NSString * _idsIdentifier;
    NSSet * _nodes;
    NSString * _rapportIdentifier;
}

@property (nonatomic, retain) NSString *avOutpuDeviceIdentifier;
@property (nonatomic, readonly) NSString *candidateIdentifier;
@property (nonatomic, retain) NSString *idsIdentifier;
@property (nonatomic, readonly) NSSet *nodes;
@property (nonatomic, retain) NSString *rapportIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)avOutpuDeviceIdentifier;
- (id)candidateIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)idsIdentifier;
- (id)initWithCandidateIdentifier:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)nodes;
- (id)rapportIdentifier;
- (void)setAvOutpuDeviceIdentifier:(id)arg1;
- (void)setIdsIdentifier:(id)arg1;
- (void)setRapportIdentifier:(id)arg1;
- (void)updateNodes:(id)arg1;

@end
