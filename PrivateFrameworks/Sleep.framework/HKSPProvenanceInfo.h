
@interface HKSPProvenanceInfo : NSObject {
    NSString * _presentation;
    NSString * _source;
}

@property (nonatomic, readonly) NSString *presentation;
@property (nonatomic, readonly) NSString *source;

+ (id)unknownProvenance;

- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (id)initWithSource:(id)arg1 presentation:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToProvenanceInfo:(id)arg1;
- (id)presentation;
- (id)source;

@end
