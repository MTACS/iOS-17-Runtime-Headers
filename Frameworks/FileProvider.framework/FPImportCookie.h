
@interface FPImportCookie : NSObject <NSSecureCoding> {
    NSMutableDictionary * _entries;
    NSDate * lastModificationDate;
}

@property (nonatomic, readonly) NSDictionary *entries;

+ (bool)clearCookieForDomainURL:(id)arg1 error:(id*)arg2;
+ (bool)isImportingDomainsForUserURL:(id)arg1;
+ (bool)isImportingInVolumeAtURL:(id)arg1;
+ (bool)supportsSecureCoding;
+ (bool)writeCookieForDomainURL:(id)arg1 error:(id*)arg2;

- (void).cxx_destruct;
- (void)addEntry:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)entries;
- (bool)hasExpired;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1 error:(id*)arg2;
- (bool)isEmpty;
- (void)removeEntryForPathRelativeToVolumeRoot:(id)arg1;

@end
