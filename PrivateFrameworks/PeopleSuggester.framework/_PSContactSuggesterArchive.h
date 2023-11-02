
@interface _PSContactSuggesterArchive : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _archiveDate;
    NSDictionary * _contactPriorDictionary;
}

@property (nonatomic, readonly) NSDate *archiveDate;
@property (nonatomic, readonly) NSDictionary *contactPriorDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archiveDate;
- (id)contactPriorDictionary;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithArchiveDate:(id)arg1 contactPriorDictionary:(id)arg2;
- (id)initWithCoder:(id)arg1;

@end
