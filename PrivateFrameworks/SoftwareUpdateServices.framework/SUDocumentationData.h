
@interface SUDocumentationData : NSObject <NSCopying, NSSecureCoding> {
    NSString * _buildVersion;
    NSString * _humanReadableUpdateName;
    NSData * _license;
    NSData * _readme;
    NSData * _readmeSummary;
}

@property (nonatomic, retain) NSString *buildVersion;
@property (nonatomic, retain) NSString *humanReadableUpdateName;
@property (nonatomic, retain) NSData *license;
@property (nonatomic, retain) NSData *readme;
@property (nonatomic, retain) NSData *readmeSummary;

+ (bool)supportsSecureCoding;

- (id)buildVersion;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)humanReadableUpdateName;
- (id)initWithCoder:(id)arg1;
- (id)initWithSUCoreDocumentationData:(id)arg1;
- (id)license;
- (id)readme;
- (id)readmeSummary;
- (void)setBuildVersion:(id)arg1;
- (void)setHumanReadableUpdateName:(id)arg1;
- (void)setLicense:(id)arg1;
- (void)setReadme:(id)arg1;
- (void)setReadmeSummary:(id)arg1;

@end
