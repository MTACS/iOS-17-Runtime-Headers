
@interface PKPassAutomaticSelectionCriterion : NSObject <NSCopying, NSSecureCoding> {
    NSSet * _TCIs;
    NSSet * _associatedReaderIDs;
    NSData * _mask;
    NSSet * _primaryTCIs;
    NSSet * _readerIDs;
    bool  _supportsExpress;
    bool  _supportsInSessionExpress;
    long long  _technologyType;
    NSString * _type;
}

@property (nonatomic, copy) NSSet *TCIs;
@property (nonatomic, copy) NSSet *associatedReaderIDs;
@property (nonatomic, copy) NSData *mask;
@property (nonatomic, copy) NSSet *primaryTCIs;
@property (nonatomic, copy) NSSet *readerIDs;
@property (nonatomic) bool supportsExpress;
@property (nonatomic) bool supportsInSessionExpress;
@property (nonatomic) long long technologyType;
@property (nonatomic, copy) NSString *type;

+ (id)criterionForExpressMode:(id)arg1;
+ (id)expressModeForCriterion:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)TCIs;
- (id)asDictionary;
- (id)associatedReaderIDs;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mask;
- (id)primaryTCIs;
- (id)readerIDs;
- (void)setAssociatedReaderIDs:(id)arg1;
- (void)setMask:(id)arg1;
- (void)setPrimaryTCIs:(id)arg1;
- (void)setReaderIDs:(id)arg1;
- (void)setSupportsExpress:(bool)arg1;
- (void)setSupportsInSessionExpress:(bool)arg1;
- (void)setTCIs:(id)arg1;
- (void)setTechnologyType:(long long)arg1;
- (void)setType:(id)arg1;
- (bool)supportsExpress;
- (bool)supportsInSessionExpress;
- (long long)technologyType;
- (id)type;

@end
