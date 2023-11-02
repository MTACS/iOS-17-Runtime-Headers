
@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _fromDate;
    unsigned long long  _limit;
    NSSet * _matchingBundleIds;
    NSString * _matchingContactHandle;
    NSSet * _matchingDocumentIds;
    NSDate * _toDate;
}

@property (nonatomic, retain) NSDate *fromDate;
@property (nonatomic) unsigned long long limit;
@property (nonatomic, retain) NSSet *matchingBundleIds;
@property (nonatomic, retain) NSString *matchingContactHandle;
@property (nonatomic, retain) NSSet *matchingDocumentIds;
@property (nonatomic, retain) NSDate *toDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fromDate;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSourceQuery:(id)arg1;
- (unsigned long long)limit;
- (id)matchingBundleIds;
- (id)matchingContactHandle;
- (id)matchingDocumentIds;
- (void)setFromDate:(id)arg1;
- (void)setLimit:(unsigned long long)arg1;
- (void)setMatchingBundleIds:(id)arg1;
- (void)setMatchingContactHandle:(id)arg1;
- (void)setMatchingDocumentIds:(id)arg1;
- (void)setToDate:(id)arg1;
- (id)toDate;

@end
