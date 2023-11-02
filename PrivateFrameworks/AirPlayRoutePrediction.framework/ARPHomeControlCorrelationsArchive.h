
@interface ARPHomeControlCorrelationsArchive : NSObject <NSCopying, NSSecureCoding> {
    NSDate * _archiveDate;
    NSDictionary * _microlocationCorrelationsDictionary;
    NSDictionary * _nextActionCorrelationsDictionary;
}

@property (nonatomic, readonly) NSDate *archiveDate;
@property (nonatomic, readonly) NSDictionary *microlocationCorrelationsDictionary;
@property (nonatomic, readonly) NSDictionary *nextActionCorrelationsDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)archiveDate;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMicrolocationsCorrelationsDictionary:(id)arg1 nextActionCorrelationsDictionary:(id)arg2 archiveDate:(id)arg3;
- (id)microlocationCorrelationsDictionary;
- (id)nextActionCorrelationsDictionary;

@end
